"""The Skunk Ape Sneak palette, designed in OKLCH and written out as linear RGB for Unreal.

  python SourceArt/Palette/palette.py        -> SourceArt/Palette/palette.json and a printed table

The scheme is a cool night swamp (teal greens, teal water, indigo sky) with warm accents kept
for the things the eye should go to: the Skunk Ape, the campsite and the picnic baskets.
Each entry is (lightness, chroma, hue). Colours of the same kind share lightness and chroma
and differ only in hue, so nothing jumps out by accident.
"""
import json
import os

import oklab

# name: (L, C, h)  -> the "Solid Color Albedo" of MI_SAS_<name>
ALBEDO = {
    # cool family: foliage, water
    "Leaf": (0.42, 0.070, 165),
    "LeafLight": (0.52, 0.085, 155),
    "Moss": (0.64, 0.045, 172),          # pale Spanish moss
    "Reed": (0.52, 0.085, 145),
    "LilyPad": (0.58, 0.095, 155),
    "SwampWater": (0.34, 0.050, 200),
    "Ripple": (0.50, 0.055, 197),
    "Stone": (0.55, 0.020, 250),
    # warm neutrals: wood
    "Bark": (0.42, 0.035, 55),
    "BarkLight": (0.56, 0.045, 60),
    "Wood": (0.56, 0.060, 62),
    "Cattail": (0.46, 0.070, 55),
    # the ape: warm, a step more vivid than the wood around him
    "ApeFur": (0.60, 0.110, 52),
    "ApeFurDark": (0.48, 0.095, 48),
    "ApeSkin": (0.42, 0.030, 40),
    "ApeTeeth": (0.94, 0.030, 95),
    # campsite and picnic: the warm accents
    "Wicker": (0.76, 0.085, 78),
    "WickerDark": (0.62, 0.080, 72),
    "Bread": (0.84, 0.090, 80),
    "Canvas": (0.80, 0.080, 85),
    "CanvasDark": (0.35, 0.020, 85),
    "HatFelt": (0.70, 0.070, 78),
    "ClothRed": (0.60, 0.190, 25),
    "Apple": (0.64, 0.190, 27),
    "ClothWhite": (0.95, 0.015, 90),
    "Flower": (0.88, 0.080, 350),
    "Yellow": (0.90, 0.130, 98),
}

# name: (albedo LCh, emission LCh, strength) for the materials that glow
EMISSIVE = {
    "ApeEyes": ((0.91, 0.160, 97), (0.91, 0.160, 97), 12.0),
    "Flame": ((0.80, 0.160, 62), (0.80, 0.160, 62), 0.5),
    "FlameCore": ((0.93, 0.120, 95), (0.93, 0.120, 95), 0.9),
    "Stink": ((0.84, 0.170, 128), (0.84, 0.170, 128), 0.5),
    "Warning": ((0.66, 0.230, 30), (0.68, 0.230, 32), 3.0),
    "Ripple": ((0.50, 0.055, 197), (0.66, 0.060, 197), 0.35),
}

# Player colours: the same chroma for all four, with lightness stepped (blue darkest, yellow
# lightest) so they still differ for players who cannot tell the hues apart.
PLAYER_CHROMA = 0.19
PLAYERS = {"Player0": (0.64, 27), "Player1": (0.58, 258), "Player2": (0.87, 95), "Player3": (0.75, 148)}

# The far tree lines fade from a dark canopy colour to the sky's own colour.
CANOPY_NIGHT = (0.24, 0.045, 172)
SKY_NIGHT = (0.30, 0.075, 283)
TREELINES = {"Treeline1": 0.30, "Treeline2": 0.58, "Treeline3": 0.82}


def build():
    out = {}
    for name, lch in ALBEDO.items():
        out[name] = {"albedo": oklab.oklch(*lch)}
    for name, (alb, emi, strength) in EMISSIVE.items():
        out[name] = {"albedo": oklab.oklch(*alb), "emission": oklab.oklch(*emi), "strength": strength}
    for name, (L, h) in PLAYERS.items():
        # dark body colour so the night light cannot shift the hue; the glow carries the colour
        out[name] = {"albedo": oklab.oklch(L * 0.55, PLAYER_CHROMA * 0.6, h), "emission": oklab.oklch(L, PLAYER_CHROMA, h), "strength": 0.9}
    canopy, sky = oklab.oklch(*CANOPY_NIGHT), oklab.oklch(*SKY_NIGHT)
    for name, t in TREELINES.items():
        shade = oklab.mix(canopy, sky, t)
        out[name] = {"albedo": oklab.mix(shade, (0, 0, 0), 0.5), "emission": shade, "strength": 1.0}
    return out


if __name__ == "__main__":
    palette = build()
    here = os.path.dirname(os.path.abspath(__file__))
    with open(os.path.join(here, "palette.json"), "w") as f:
        json.dump({k: {kk: (list(vv) if isinstance(vv, tuple) else vv) for kk, vv in v.items()} for k, v in palette.items()}, f, indent=1)
    for name, entry in palette.items():
        glow = "  glow %s x%.1f" % (oklab.to_srgb8(entry["emission"]), entry["strength"]) if "emission" in entry else ""
        print("%-12s %s  %s%s" % (name, oklab.to_srgb8(entry["albedo"]), oklab.describe(entry["albedo"]), glow))
