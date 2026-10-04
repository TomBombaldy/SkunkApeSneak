"""Synthesize the sound effects and the sneaking loop for Skunk Ape Sneak.

Run with any Python that has numpy (Blender's bundled one works):
  "<Blender>/4.0/python/bin/python.exe" SourceArt/Audio/build_audio.py [out_dir]

Everything is made from oscillators, plucked-string models and noise. No samples are used.
"""
import os
import sys
import wave

import numpy as np

SR = 44100
OUT_DIR = sys.argv[1] if len(sys.argv) > 1 else os.path.dirname(os.path.abspath(__file__))
rng = np.random.default_rng(7)
TAU = 2 * np.pi


def secs(duration):
    return np.arange(int(SR * duration)) / SR


def band(x, lo, hi, soft=0.25):
    """Keep the frequencies between lo and hi, with gentle edges."""
    spec = np.fft.rfft(x)
    f = np.fft.rfftfreq(len(x), 1 / SR)
    gain = 1 / (1 + (lo / np.maximum(f, 1e-6)) ** (2 / soft)) if lo > 0 else np.ones_like(f)
    gain = gain / (1 + (f / hi) ** (2 / soft))
    return np.fft.irfft(spec * gain, len(x))


def fade(x, attack=0.004, release=0.02):
    n_a, n_r = int(SR * attack), int(SR * release)
    x = x.copy()
    x[:n_a] *= np.linspace(0, 1, n_a)
    x[-n_r:] *= np.linspace(1, 0, n_r)
    return x


def sweep(f0, f1, duration, shape="sine"):
    t = secs(duration)
    freq = f0 * (f1 / f0) ** (t / duration)
    phase = TAU * np.cumsum(freq) / SR
    if shape == "saw":
        return 2 * ((phase / TAU) % 1) - 1
    return np.sin(phase)


def pluck(freq, duration, bright=2500.0, damp=0.996):
    """A plucked string (Karplus-Strong), computed one period at a time."""
    n = max(2, int(round(SR / freq)))
    period = band(rng.uniform(-1, 1, n * 8), 0, bright)[:n]
    period -= period.mean()
    out = []
    for _ in range(int(duration * SR / n) + 1):
        out.append(period)
        period = damp * 0.5 * (period + np.roll(period, 1))
    return fade(np.concatenate(out)[:int(SR * duration)], 0.001, 0.03)


def mallet(freq, duration=0.5):
    """A soft xylophone note."""
    t = secs(duration)
    tone = np.sin(TAU * freq * t) * np.exp(-t * 9) + 0.3 * np.sin(TAU * 4 * freq * t) * np.exp(-t * 28)
    return fade(tone, 0.002, 0.03)


def note(name):
    names = {"C": 0, "C#": 1, "D": 2, "D#": 3, "E": 4, "F": 5, "F#": 6, "G": 7, "G#": 8, "A": 9, "A#": 10, "B": 11}
    return 440.0 * 2 ** ((names[name[:-1]] + 12 * (int(name[-1]) + 1) - 69) / 12)


def normalize(x, peak=0.85):
    return x * (peak / np.max(np.abs(x)))


def save(name, x):
    path = os.path.join(OUT_DIR, name + ".wav")
    data = (np.clip(x, -1, 1) * 32767).astype("<i2")
    with wave.open(path, "wb") as f:
        f.setnchannels(1)
        f.setsampwidth(2)
        f.setframerate(SR)
        f.writeframes(data.tobytes())
    print("AUDIO %s %.2fs" % (name, len(x) / SR))


# --- sound effects ----------------------------------------------------------

def hop():
    t = secs(0.16)
    body = sweep(260, 540, 0.16) * np.exp(-t * 16)
    swish = band(rng.normal(0, 1, len(t)), 900, 5000) * np.exp(-t * 30) * 0.25
    return normalize(fade(body + swish), 0.7)


def caught():
    """Getting stink-blasted: a wet raspberry, a slide whistle falling away, and a boing on landing."""
    out = np.zeros(int(SR * 1.25))
    # the raspberry, speeding up as it runs out of puff
    d = 0.42
    t = secs(d)
    flutter = 0.5 + 0.5 * np.sign(np.sin(TAU * (22 + 14 * t / d) * t))
    rasp = np.tanh(2.4 * band(sweep(110, 62, d, "saw") * flutter, 45, 1100)) * np.exp(-t * 3.0)
    out[:len(rasp)] += fade(rasp, 0.004, 0.05) * 0.9
    # a slide whistle dropping as the ranger sails backwards
    d = 0.62
    t = secs(d)
    freq = 1500 * (330 / 1500) ** (t / d) * (1 + 0.035 * np.sin(TAU * 7.5 * t))
    phase = TAU * np.cumsum(freq) / SR
    whistle = (np.sin(phase) + 0.18 * np.sin(2 * phase)) * np.sin(np.pi * np.minimum(t / d, 1)) ** 0.6
    at = int(SR * 0.14)
    out[at:at + len(whistle)] += fade(whistle, 0.02, 0.06) * 0.42
    # and a springy boing as they land (the knock-back takes 0.8 s)
    d = 0.4
    t = secs(d)
    freq = 150 * (1 + 0.55 * np.exp(-t * 7) * np.sin(TAU * 13 * t))
    phase = TAU * np.cumsum(freq) / SR
    boing = (np.sin(phase) + 0.4 * np.sin(2 * phase) + 0.2 * np.sin(3 * phase)) * np.exp(-t * 7.5)
    at = int(SR * 0.82)
    out[at:at + len(boing)] += fade(boing, 0.003, 0.05) * 0.7
    return normalize(out)


def win():
    out = np.zeros(int(SR * 1.5))
    for i, n in enumerate(["C5", "E5", "G5", "C6", "E6"]):
        tone = mallet(note(n), 0.9) * (0.8 if i < 4 else 0.6)
        start = int(SR * 0.085 * i)
        out[start:start + len(tone)] += tone
    for n in ["C5", "G5", "C6"]:
        tone = mallet(note(n), 0.9) * 0.4
        start = int(SR * 0.47)
        out[start:start + len(tone)] += tone
    return normalize(fade(out, 0.002, 0.1), 0.8)


def warn():
    """He stirs: a grunt, then two rising notes a tritone apart."""
    out = np.zeros(int(SR * 0.6))
    t = secs(0.3)
    grunt = np.tanh(3 * band(sweep(70, 105, 0.3, "saw") * (1 + 0.5 * np.sin(TAU * 31 * t)), 50, 700)) * np.sin(np.pi * t / 0.3) * 0.5
    out[:len(grunt)] += grunt
    for i, f in enumerate([note("A4"), note("D#5")]):
        tone = mallet(f, 0.35) * 0.9
        start = int(SR * (0.1 + 0.13 * i))
        out[start:start + len(tone)] += tone
    return normalize(fade(out, 0.003, 0.05))


def look():
    """He turns round: a rough growl that sags in pitch."""
    d = 1.15
    t = secs(d)
    rough = 1 + 0.6 * np.sin(TAU * 27 * t) + 0.3 * np.sin(TAU * 41 * t)
    voice = sweep(92, 58, d, "saw") * rough + 0.6 * sweep(138, 86, d, "saw")
    voice = band(voice, 60, 1100)
    breath = band(rng.normal(0, 1, len(t)), 200, 1800) * 0.35
    shape = np.minimum(t / 0.06, 1) * np.exp(-np.maximum(t - 0.35, 0) * 3.2)
    return normalize(fade(np.tanh(2.5 * (voice + breath) * shape), 0.004, 0.1))


# --- the sneaking loop ------------------------------------------------------

def music():
    bpm = 104
    beat = 60 / bpm
    bars = 8
    total = int(SR * beat * 4 * bars)
    out = np.zeros(total)

    def put(sound, at_beat, gain):
        start = int(SR * beat * at_beat) % total
        idx = (start + np.arange(len(sound))) % total      # tails wrap round so the loop is seamless
        np.add.at(out, idx, sound * gain)

    bass = [
        ["A2", "C3", "D3", "D#3"], ["E3", None, "E2", None],
        ["A2", "C3", "D3", "D#3"], ["E3", "G3", "E3", None],
        ["F2", "A2", "C3", "D3"], ["E3", None, "E2", None],
        ["A2", "C3", "D3", "D#3"], ["E3", "D3", "C3", "B2"],
    ]
    for b, bar in enumerate(bass):
        for i, n in enumerate(bar):
            if n:
                put(pluck(note(n), 0.5, bright=1400), b * 4 + i, 0.55)
    tune = [(1, 1.5, "C5"), (1, 3.5, "B4"), (3, 3.0, "E5"), (3, 3.5, "D#5"), (3, 3.75, "E5"),
            (5, 1.5, "A4"), (5, 3.5, "G#4"), (7, 3.5, "A4")]
    for b, at, n in tune:
        put(mallet(note(n), 0.45), b * 4 + at, 0.22)
    t = secs(0.07)
    tick = band(rng.normal(0, 1, len(t)), 5000, 12000) * np.exp(-t * 70)
    t = secs(0.09)
    snap = band(rng.normal(0, 1, len(t)), 1200, 3800) * np.exp(-t * 55)
    for b in range(bars):
        for off in (0.5, 1.5, 2.5, 3.5):
            put(tick, b * 4 + off, 0.05 if b % 2 == 0 else 0.03)
        for on in (1, 3):
            put(snap, b * 4 + on, 0.10)

    # night chorus: two crickets and the odd frog
    def chirp(freq):
        t = secs(0.075)
        pulses = (np.sin(TAU * 40 * t) > 0) * np.sin(np.pi * t / 0.075)
        return np.sin(TAU * freq * t) * pulses
    at = 0.2
    while at < bars * 4:
        put(chirp(4300), at, 0.030)
        at += rng.uniform(0.7, 1.0)
    at = 0.55
    while at < bars * 4:
        put(chirp(4850), at, 0.022)
        at += rng.uniform(1.1, 1.6)
    t = secs(0.32)
    croak = band(np.sign(np.sin(TAU * 30 * t)) * (np.sin(TAU * 330 * t) + 0.5 * np.sin(TAU * 910 * t)), 150, 1500) * np.sin(np.pi * t / 0.32)
    for at in (6.6, 7.4, 22.6, 30.5):
        put(croak, at, 0.07)
    return normalize(out, 0.7)


os.makedirs(OUT_DIR, exist_ok=True)
save("SW_SAS_Hop", hop())
save("SW_SAS_Caught", caught())
save("SW_SAS_Win", win())
save("SW_SAS_Warn", warn())
save("SW_SAS_Look", look())
save("SW_SAS_Music", music())
print("AUDIO_DONE")
