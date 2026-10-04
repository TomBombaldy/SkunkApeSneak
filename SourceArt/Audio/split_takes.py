"""Cut one long microphone recording into separate takes, wherever there is sound between silences.

Run with a Python that has numpy (Blender's bundled one works):
  python.exe SourceArt/Audio/split_takes.py <recording.wav> <out_dir> <name_prefix>

Each take is trimmed, faded at both ends and levelled to the same peak, then saved as
<out_dir>/<name_prefix><n>.wav (16-bit mono, 44.1 kHz).
"""
import os
import sys
import wave

import numpy as np

src, out_dir, prefix = sys.argv[1:4]
with wave.open(src) as w:
    sr, channels, width = w.getframerate(), w.getnchannels(), w.getsampwidth()
    raw = w.readframes(w.getnframes())
if width == 1:
    x = (np.frombuffer(raw, "u1").astype(np.float64) - 128) / 128
else:
    x = np.frombuffer(raw, "<i2").astype(np.float64) / 32768
if channels > 1:
    x = x.reshape(-1, channels).mean(axis=1)
x = x - x.mean()
print("recording %.1fs, %d Hz, peak %.3f" % (len(x) / sr, sr, np.abs(x).max()))

# loudness in 20 ms windows; a take is anything well above the room noise
win = int(sr * 0.02)
frames = len(x) // win
rms = np.sqrt((x[:frames * win].reshape(frames, win) ** 2).mean(axis=1))
floor = np.percentile(rms, 20)
threshold = max(floor * 4, rms.max() * 0.06)
loud = rms > threshold
takes, start, quiet = [], None, 0
for i, on in enumerate(loud):
    if on:
        if start is None:
            start = i
        quiet = 0
    elif start is not None:
        quiet += 1
        if quiet > 22:                      # 0.45 s of silence ends a take
            takes.append((start, i - quiet))
            start, quiet = None, 0
if start is not None:
    takes.append((start, frames - 1 - quiet))
takes = [(a, b) for a, b in takes if (b - a) * 0.02 >= 0.15]
print("noise floor %.4f, threshold %.4f, takes found: %d" % (floor, threshold, len(takes)))

os.makedirs(out_dir, exist_ok=True)
for n, (a, b) in enumerate(takes, 1):
    lo = max(0, a * win - int(sr * 0.05))
    hi = min(len(x), (b + 1) * win + int(sr * 0.12))
    clip = x[lo:hi].copy()
    fade_in, fade_out = int(sr * 0.008), int(sr * 0.06)
    clip[:fade_in] *= np.linspace(0, 1, fade_in)
    clip[-fade_out:] *= np.linspace(1, 0, fade_out)
    clip *= 0.9 / np.abs(clip).max()
    if sr != 44100:                          # resample by linear interpolation
        t = np.arange(0, len(clip), sr / 44100)
        clip = np.interp(t, np.arange(len(clip)), clip)
    path = os.path.join(out_dir, "%s%d.wav" % (prefix, n))
    with wave.open(path, "wb") as w:
        w.setnchannels(1)
        w.setsampwidth(2)
        w.setframerate(44100)
        w.writeframes((clip * 32767).astype("<i2").tobytes())
    print("TAKE %d: %.2fs at %.1fs into the recording -> %s" % (n, len(clip) / 44100, lo / sr, os.path.basename(path)))
