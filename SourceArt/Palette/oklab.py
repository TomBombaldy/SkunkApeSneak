"""OKLab / OKLCH helpers for building the game's palette (Bjorn Ottosson's colour space).

Colours are designed as OKLCH (lightness 0-1, chroma, hue in degrees) and converted to the
linear RGB that Unreal's material colour parameters expect. No dependencies.
"""
import math


def oklab_to_linear(L, a, b):
    l_ = L + 0.3963377774 * a + 0.2158037573 * b
    m_ = L - 0.1055613458 * a - 0.0638541728 * b
    s_ = L - 0.0894841775 * a - 1.2914855480 * b
    l, m, s = l_ ** 3, m_ ** 3, s_ ** 3
    return (4.0767416621 * l - 3.3077115913 * m + 0.2309699292 * s,
            -1.2684380046 * l + 2.6097574011 * m - 0.3413193965 * s,
            -0.0041960863 * l - 0.7034186147 * m + 1.7076147010 * s)


def linear_to_oklab(r, g, b):
    l = 0.4122214708 * r + 0.5363325363 * g + 0.0514459929 * b
    m = 0.2119034982 * r + 0.6806995451 * g + 0.1073969566 * b
    s = 0.0883024619 * r + 0.2817188376 * g + 0.6299787005 * b
    l_, m_, s_ = (math.copysign(abs(v) ** (1 / 3), v) for v in (l, m, s))
    return (0.2104542553 * l_ + 0.7936177850 * m_ - 0.0040720468 * s_,
            1.9779984951 * l_ - 2.4285922050 * m_ + 0.4505937099 * s_,
            0.0259040371 * l_ + 0.7827717662 * m_ - 0.8086757660 * s_)


def oklch_to_oklab(L, C, h):
    return L, C * math.cos(math.radians(h)), C * math.sin(math.radians(h))


def oklab_to_oklch(L, a, b):
    return L, math.hypot(a, b), math.degrees(math.atan2(b, a)) % 360


def in_gamut(rgb, eps=1e-4):
    return all(-eps <= v <= 1 + eps for v in rgb)


def oklch(L, C, h):
    """OKLCH to linear RGB. If the colour is outside sRGB, chroma is reduced until it fits."""
    lo, hi = 0.0, C
    rgb = oklab_to_linear(*oklch_to_oklab(L, C, h))
    if not in_gamut(rgb):
        for _ in range(24):
            mid = (lo + hi) / 2
            if in_gamut(oklab_to_linear(*oklch_to_oklab(L, mid, h))):
                lo = mid
            else:
                hi = mid
        rgb = oklab_to_linear(*oklch_to_oklab(L, lo, h))
    return tuple(min(1.0, max(0.0, v)) for v in rgb)


def mix(rgb0, rgb1, t):
    """Blend two linear RGB colours in OKLab, so the in-between shades stay clean."""
    a, b = linear_to_oklab(*rgb0), linear_to_oklab(*rgb1)
    lab = tuple(x + (y - x) * t for x, y in zip(a, b))
    return tuple(min(1.0, max(0.0, v)) for v in oklab_to_linear(*lab))


def describe(rgb):
    L, C, h = oklab_to_oklch(*linear_to_oklab(*rgb))
    return "L %.2f C %.3f h %3.0f" % (L, C, h)


def to_srgb8(rgb):
    def enc(v):
        v = min(1.0, max(0.0, v))
        return round(255 * (12.92 * v if v <= 0.0031308 else 1.055 * v ** (1 / 2.4) - 0.055))
    return "#%02x%02x%02x" % tuple(enc(v) for v in rgb)
