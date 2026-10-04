"""Build the swamp props for Skunk Ape Sneak as low-poly static meshes.

Run headless:
  blender -b --python SourceArt/SwampProps/build_swamp_props.py -- <out_dir> [preview|export|all]

Units are centimetres (scene unit scale 0.01) so the FBX files import 1:1 into Unreal.
Every prop sits on the ground with its pivot at the base centre. Colours are plain
material slots named M_SAS_<Colour>; in Unreal they are swapped for MM_Master instances.
"""
import math
import os
import random
import sys

import bmesh
import bpy
from mathutils import Matrix, Vector

argv = sys.argv[sys.argv.index("--") + 1:] if "--" in sys.argv else []
OUT_DIR = argv[0] if argv else os.path.dirname(os.path.abspath(__file__))
MODE = argv[1] if len(argv) > 1 else "all"
os.makedirs(OUT_DIR, exist_ok=True)

bpy.ops.wm.read_factory_settings(use_empty=True)
scene = bpy.context.scene
scene.unit_settings.system = "METRIC"
scene.unit_settings.scale_length = 0.01

PALETTE = {
    "Bark": (0.16, 0.12, 0.10),
    "BarkLight": (0.30, 0.22, 0.16),
    "Leaf": (0.08, 0.22, 0.10),
    "LeafLight": (0.14, 0.32, 0.12),
    "Moss": (0.38, 0.44, 0.34),
    "Reed": (0.20, 0.36, 0.12),
    "Cattail": (0.24, 0.13, 0.06),
    "LilyPad": (0.16, 0.42, 0.16),
    "Flower": (0.95, 0.55, 0.70),
    "Yellow": (0.98, 0.80, 0.20),
    "Wicker": (0.62, 0.44, 0.22),
    "WickerDark": (0.40, 0.26, 0.12),
    "ClothRed": (0.75, 0.10, 0.10),
    "ClothWhite": (0.92, 0.90, 0.84),
    "Bread": (0.80, 0.58, 0.30),
    "Apple": (0.80, 0.12, 0.10),
    "Canvas": (0.52, 0.50, 0.30),
    "CanvasDark": (0.10, 0.10, 0.08),
    "Stone": (0.34, 0.35, 0.37),
    "Wood": (0.34, 0.22, 0.12),
    "Flame": (1.00, 0.45, 0.08),
    "FlameCore": (1.00, 0.85, 0.30),
    "HatFelt": (0.50, 0.38, 0.22),
    "PlayerColor": (0.90, 0.15, 0.12),
    "Stink": (0.42, 0.70, 0.12),
    "Warning": (1.00, 0.10, 0.05),
    "Treeline": (0.03, 0.07, 0.07),
}
MATERIALS = {}
for key, rgb in PALETTE.items():
    mat = bpy.data.materials.new("M_SAS_" + key)
    mat.diffuse_color = (*rgb, 1.0)
    MATERIALS[key] = mat

Z = Vector((0, 0, 1))


def along(p0, p1):
    """Matrix placing a Z-aligned primitive between two points, and the distance."""
    p0, p1 = Vector(p0), Vector(p1)
    d = p1 - p0
    rot = Z.rotation_difference(d.normalized()).to_matrix().to_4x4()
    return Matrix.Translation((p0 + p1) / 2) @ rot, d.length


class Prop:
    def __init__(self, name, seed=1, recalc=True):
        self.name = name
        self.bm = bmesh.new()
        self.mats = []
        self.rng = random.Random(seed)
        self.recalc = recalc      # flat cards set their own facing, so they skip the normal recalculation

    def mat(self, key):
        if key not in self.mats:
            self.mats.append(key)
        return self.mats.index(key)

    def _finish(self, key, faces_before, verts_before, jitter):
        self.bm.faces.ensure_lookup_table()
        self.bm.verts.ensure_lookup_table()
        idx = self.mat(key)
        for f in self.bm.faces[faces_before:]:
            f.material_index = idx
            f.smooth = False
        if jitter:
            for v in self.bm.verts[verts_before:]:
                v.co += Vector((self.rng.uniform(-1, 1), self.rng.uniform(-1, 1), self.rng.uniform(-1, 1))) * jitter

    def cone(self, key, p0, p1, r0, r1, seg=6, caps=True, jitter=0.0):
        nf, nv = len(self.bm.faces), len(self.bm.verts)
        matrix, length = along(p0, p1)
        bmesh.ops.create_cone(self.bm, cap_ends=caps, cap_tris=True, segments=seg, radius1=r0, radius2=r1,
                              depth=length, matrix=matrix, calc_uvs=True)
        self._finish(key, nf, nv, jitter)

    def blob(self, key, center, radii, sub=1, jitter=0.0):
        nf, nv = len(self.bm.faces), len(self.bm.verts)
        matrix = Matrix.Translation(center) @ Matrix.Diagonal((*radii, 1.0))
        bmesh.ops.create_icosphere(self.bm, subdivisions=sub, radius=1.0, matrix=matrix, calc_uvs=True)
        self._finish(key, nf, nv, jitter)

    def box(self, key, center, size, rot_z=0.0, jitter=0.0):
        nf, nv = len(self.bm.faces), len(self.bm.verts)
        matrix = Matrix.Translation(center) @ Matrix.Rotation(math.radians(rot_z), 4, "Z") @ Matrix.Diagonal((*size, 1.0))
        bmesh.ops.create_cube(self.bm, size=1.0, matrix=matrix, calc_uvs=True)
        self._finish(key, nf, nv, jitter)

    def poly(self, key, points):
        """A single flat face from a list of points (counter-clockwise seen from above)."""
        nf, nv = len(self.bm.faces), len(self.bm.verts)
        verts = [self.bm.verts.new(p) for p in points]
        self.bm.faces.new(verts)
        self._finish(key, nf, nv, 0.0)

    def solid(self, key, points, faces):
        """A closed shape from shared corner points, so its faces all end up pointing outwards."""
        nf, nv = len(self.bm.faces), len(self.bm.verts)
        verts = [self.bm.verts.new(p) for p in points]
        for face in faces:
            self.bm.faces.new([verts[i] for i in face])
        self._finish(key, nf, nv, 0.0)

    def card(self, key, points, toward=(0, 0, 0)):
        """A flat face that is made to look towards a point, whatever order its corners were given in."""
        nf, nv = len(self.bm.faces), len(self.bm.verts)
        face = self.bm.faces.new([self.bm.verts.new(p) for p in points])
        face.normal_update()
        if face.normal.dot(Vector(toward) - face.calc_center_median()) < 0:
            face.normal_flip()
        self._finish(key, nf, nv, 0.0)

    def build(self):
        mesh = bpy.data.meshes.new(self.name)
        bmesh.ops.triangulate(self.bm, faces=self.bm.faces[:])
        if self.recalc:
            bmesh.ops.recalc_face_normals(self.bm, faces=self.bm.faces[:])
        self.bm.to_mesh(mesh)
        self.bm.free()
        for key in self.mats:
            mesh.materials.append(MATERIALS[key])
        ob = bpy.data.objects.new(self.name, mesh)
        scene.collection.objects.link(ob)
        return ob


# ---------------------------------------------------------------------------
# Props
# ---------------------------------------------------------------------------
def cypress(name, height, seed, moss=9):
    p = Prop(name, seed)
    r = p.rng
    # flared, buttressed base
    p.cone("Bark", (0, 0, 0), (0, 0, 130), 78, 30, seg=9, jitter=5)
    for i in range(6):                                   # root flanges
        a = i / 6 * math.tau + r.uniform(-0.2, 0.2)
        d = Vector((math.cos(a), math.sin(a), 0))
        p.cone("Bark", d * 105 + Vector((0, 0, 0)), d * 30 + Vector((0, 0, 110)), 16, 9, seg=4)
    lean = Vector((r.uniform(-22, 22), r.uniform(-22, 22), 0))
    top = lean + Vector((0, 0, height))
    mid = lean * 0.4 + Vector((0, 0, height * 0.55))
    p.cone("Bark", (0, 0, 120), mid, 31, 22, seg=7, jitter=2)
    p.cone("Bark", mid, top, 22, 12, seg=7, jitter=2)
    # limbs with a flat canopy pad at each end, and moss hanging off them
    tips = []
    for i in range(5):
        a = i / 5 * math.tau + r.uniform(-0.4, 0.4)
        start = mid.lerp(top, r.uniform(0.25, 0.95))
        reach = r.uniform(120, 190)
        tip = start + Vector((math.cos(a) * reach, math.sin(a) * reach, r.uniform(20, 80)))
        p.cone("Bark", start, tip, 10, 4, seg=5)
        tips.append(tip)
    tips.append(top + Vector((0, 0, 30)))
    for tip in tips:
        p.blob("Leaf", tip, (r.uniform(85, 120), r.uniform(85, 120), r.uniform(34, 48)), sub=1, jitter=7)
        p.blob("LeafLight", tip + Vector((r.uniform(-30, 30), r.uniform(-30, 30), 22)), (60, 60, 24), sub=1, jitter=5)
    for i in range(moss):
        tip = r.choice(tips)
        off = Vector((r.uniform(-85, 85), r.uniform(-85, 85), -18))
        length = r.uniform(100, 210)
        p.cone("Moss", tip + off, tip + off + Vector((r.uniform(-8, 8), r.uniform(-8, 8), -length)), r.uniform(12, 19), 1.5, seg=4)
    # knees poking up around the base
    for i in range(5):
        a = r.uniform(0, math.tau)
        dist = r.uniform(120, 190)
        base = Vector((math.cos(a) * dist, math.sin(a) * dist, 0))
        p.cone("BarkLight", base, base + Vector((0, 0, r.uniform(28, 62))), r.uniform(11, 16), 3.5, seg=5)
    return p.build()


def cattails(name, seed):
    p = Prop(name, seed)
    r = p.rng
    for i in range(10):
        a = r.uniform(0, math.tau)
        base = Vector((math.cos(a), math.sin(a), 0)) * r.uniform(4, 30)
        tip = base + Vector((r.uniform(-28, 28), r.uniform(-28, 28), r.uniform(105, 175)))
        p.cone("Reed", base, tip, r.uniform(2.6, 3.6), 0.4, seg=3)
    for i in range(4):
        a = r.uniform(0, math.tau)
        base = Vector((math.cos(a), math.sin(a), 0)) * r.uniform(4, 22)
        top = base + Vector((r.uniform(-12, 12), r.uniform(-12, 12), r.uniform(150, 190)))
        p.cone("Reed", base, top, 1.4, 1.0, seg=3)
        d = (top - base).normalized()
        p.cone("Cattail", top - d * 34, top - d * 6, 4.6, 4.6, seg=6)
        p.cone("Reed", top - d * 6, top + d * 8, 1.0, 0.2, seg=3)
    return p.build()


def lily_pads(name, seed):
    p = Prop(name, seed)
    r = p.rng
    spots = [(0, 0, 40), (62, 30, 30), (-48, 50, 26), (30, -58, 34), (-66, -30, 22), (100, -40, 20)]
    for i, (x, y, rad) in enumerate(spots):
        notch = r.uniform(0, math.tau)
        seg = 9
        z = 1.5 + i * 0.3
        ring = [Vector((x + math.cos(notch + (k + 0.6) / (seg + 1.2) * math.tau) * rad,
                        y + math.sin(notch + (k + 0.6) / (seg + 1.2) * math.tau) * rad, z)) for k in range(seg + 1)]
        p.poly("LilyPad", [Vector((x, y, z))] + ring)
    # one flower
    fx, fy = spots[1][0], spots[1][1]
    for k in range(7):
        a = k / 7 * math.tau
        p.cone("Flower", (fx, fy, 3), (fx + math.cos(a) * 11, fy + math.sin(a) * 11, 13), 4.2, 0.6, seg=4)
    p.blob("Yellow", (fx, fy, 8), (3.5, 3.5, 3.5), sub=1)
    return p.build()


def log(name, seed):
    p = Prop(name, seed)
    r = p.rng
    p.cone("Bark", (-135, 0, 27), (135, 0, 30), 28, 24, seg=8, caps=False, jitter=2.5)
    p.cone("BarkLight", (-136, 0, 27), (-134, 0, 27), 27, 27, seg=8)      # cut ends
    p.cone("BarkLight", (134, 0, 30), (136, 0, 30), 23, 23, seg=8)
    p.cone("Bark", (40, 0, 40), (62, 34, 78), 9, 5, seg=5)                # broken branch stub
    p.cone("Bark", (-60, 0, 40), (-72, -30, 66), 8, 5, seg=5)
    for x in (-80, -20, 70):
        p.blob("Moss", (x, r.uniform(-6, 6), 52), (r.uniform(22, 34), 20, 7), sub=1, jitter=2)
    return p.build()


def picnic_basket(name, seed):
    p = Prop(name, seed)
    # woven body, wider at the rim, slightly oval
    p.cone("Wicker", (0, 0, 0), (0, 0, 38), 30, 37, seg=8)
    p.cone("WickerDark", (0, 0, 36), (0, 0, 42), 39, 39, seg=8)          # rim
    p.cone("WickerDark", (0, 0, 12), (0, 0, 16), 33.5, 34.2, seg=8, caps=False)   # woven band
    # arched handle
    pts = [Vector((math.cos(t) * 36, 0, 40 + math.sin(t) * 34)) for t in [i / 8 * math.pi for i in range(9)]]
    for a, b in zip(pts[:-1], pts[1:]):
        p.cone("WickerDark", a, b, 2.6, 2.6, seg=4)
    # checked cloth spilling over one side, with food poking out
    p.box("ClothRed", (0, 0, 43), (58, 58, 3), rot_z=45)
    p.box("ClothWhite", (0, 0, 43.6), (30, 30, 3), rot_z=45)
    p.box("ClothRed", (0, -40, 30), (34, 4, 26), rot_z=0)
    p.cone("Bread", (-14, 6, 40), (20, 14, 66), 6, 5, seg=6)
    p.blob("Apple", (10, -12, 50), (8, 8, 7.5), sub=1)
    p.blob("Apple", (-6, -14, 48), (7, 7, 6.5), sub=1)
    return p.build()


def picnic_blanket(name, seed):
    p = Prop(name, seed)
    cols, rows, size = 7, 5, 36
    for i in range(cols):
        for j in range(rows):
            x0 = (i - cols / 2) * size
            y0 = (j - rows / 2) * size
            key = "ClothRed" if (i + j) % 2 == 0 else "ClothWhite"
            p.poly(key, [(x0, y0, 1.2), (x0 + size, y0, 1.2), (x0 + size, y0 + size, 1.2), (x0, y0 + size, 1.2)])
    return p.build()


def tent(name, seed):
    p = Prop(name, seed)
    w, h, half = 100, 150, 125
    prism = [(0, 1, 2), (3, 5, 4), (0, 3, 4, 1), (1, 4, 5, 2), (2, 5, 3, 0)]
    # canvas shell: front triangle, back triangle, floor and the two slopes
    p.solid("Canvas", [(-w, -half, 0), (w, -half, 0), (0, -half, h), (-w, half, 0), (w, half, 0), (0, half, h)], prism)
    # dark doorway standing just proud of the front wall
    p.solid("CanvasDark", [(-42, -half - 3, 0), (42, -half - 3, 0), (0, -half - 3, 104),
                           (-42, -half + 1, 0), (42, -half + 1, 0), (0, -half + 1, 104)], prism)
    p.cone("Wood", (0, -half - 5, 0), (0, -half - 5, h + 12), 3, 3, seg=4)      # poles
    p.cone("Wood", (0, half + 2, 0), (0, half + 2, h + 12), 3, 3, seg=4)
    return p.build()


def campfire(name, seed):
    p = Prop(name, seed)
    r = p.rng
    for i in range(8):
        a = i / 8 * math.tau
        p.blob("Stone", (math.cos(a) * 46, math.sin(a) * 46, 7), (r.uniform(13, 18), r.uniform(11, 15), r.uniform(8, 11)), sub=1, jitter=1.5)
    for i in range(3):
        a = i / 3 * math.pi + 0.3
        d = Vector((math.cos(a), math.sin(a), 0))
        p.cone("Wood", d * -36 + Vector((0, 0, 8)), d * 36 + Vector((0, 0, 16)), 6.5, 5.5, seg=6)
    p.cone("Flame", (0, 0, 10), (4, 0, 78), 24, 0.5, seg=6)
    p.cone("Flame", (-12, 8, 10), (-18, 12, 52), 13, 0.5, seg=5)
    p.cone("Flame", (14, -8, 10), (20, -12, 46), 12, 0.5, seg=5)
    p.cone("FlameCore", (0, 0, 12), (2, 0, 50), 13, 0.5, seg=5)
    return p.build()


def rock(name, seed):
    p = Prop(name, seed)
    r = p.rng
    p.blob("Stone", (0, 0, 22), (48, 38, 30), sub=1, jitter=7)
    p.blob("Stone", (38, 20, 12), (24, 20, 16), sub=1, jitter=4)
    p.blob("Moss", (-6, 0, 46), (26, 22, 6), sub=1, jitter=2)
    return p.build()


def grass_tuft(name, seed):
    p = Prop(name, seed)
    r = p.rng
    for i in range(9):
        a = r.uniform(0, math.tau)
        base = Vector((math.cos(a), math.sin(a), 0)) * r.uniform(2, 16)
        tip = base + Vector((math.cos(a) * r.uniform(6, 26), math.sin(a) * r.uniform(6, 26), r.uniform(26, 58)))
        p.cone("LeafLight" if i % 3 == 0 else "Reed", base, tip, 3.2, 0.3, seg=3)
    return p.build()


def ranger_hat(name, seed):
    """A junior ranger's campaign hat. The band takes the player's colour. Pivot is where it sits on the head."""
    p = Prop(name, seed)
    p.cone("HatFelt", (0, 0, 0), (0, 0, 2.5), 30, 28, seg=12)            # wide flat brim
    p.cone("HatFelt", (0, 0, 2.5), (0, 0, 17), 15, 12.5, seg=10)         # crown
    p.cone("HatFelt", (0, 0, 17), (0, 0, 20), 12.5, 7, seg=10)           # pinched top
    p.cone("PlayerColor", (0, 0, 2.6), (0, 0, 10), 16.0, 14.6, seg=10, caps=False)  # band
    return p.build()


def player_ring(name, seed):
    """A flat ring that sits on the ground under a ranger in the player's colour."""
    p = Prop(name, seed)
    seg, r_out, r_in = 24, 92, 72
    for k in range(seg):
        a0, a1 = k / seg * math.tau, (k + 1) / seg * math.tau
        p.poly("PlayerColor", [(math.cos(a0) * r_in, math.sin(a0) * r_in, 0), (math.cos(a0) * r_out, math.sin(a0) * r_out, 0),
                               (math.cos(a1) * r_out, math.sin(a1) * r_out, 0), (math.cos(a1) * r_in, math.sin(a1) * r_in, 0)])
    return p.build()


def backpack(name, seed):
    """A junior ranger's backpack in the player's colour, with a bedroll on top.

    Pivot is the upper spine; the pack hangs behind it (+Y here, which is the ranger's back in Unreal).
    """
    p = Prop(name, seed)
    p.box("PlayerColor", (0, 17, -5), (30, 15, 34))                      # main bag
    p.box("PlayerColor", (0, 26, -12), (20, 4, 14))                      # outer pocket
    p.box("PlayerColor", (0, 17.5, 10.5), (32, 17, 5))                   # top flap
    for x in (-8, 8):
        p.box("HatFelt", (x, 25.2, 3), (3, 1.6, 18))                     # flap straps
    p.cone("Canvas", (-19, 17, 19.5), (19, 17, 19.5), 6.5, 6.5, seg=8)   # bedroll
    for x in (-10, 7):
        p.cone("HatFelt", (x, 17, 19.5), (x + 3, 17, 19.5), 7.1, 7.1, seg=8)
    return p.build()


def stink_cloud(name, seed):
    """A puff of Skunk Ape stink that swells around a ranger who gets caught. Pivot is the middle."""
    p = Prop(name, seed)
    r = p.rng
    p.blob("Stink", (0, 0, 0), (46, 46, 38), sub=1, jitter=4)
    for i in range(7):
        a = i / 7 * math.tau + r.uniform(-0.3, 0.3)
        d = r.uniform(38, 58)
        size = r.uniform(20, 34)
        p.blob("Stink", (math.cos(a) * d, math.sin(a) * d, r.uniform(-22, 34)), (size, size, size * 0.85), sub=1, jitter=3)
    return p.build()


def finish_line(name, seed):
    """A checkered finish line across the whole trail. Pivot is its centre; it is 52 deep and 940 wide."""
    p = Prop(name, seed, recalc=False)
    rows, cols, deep, wide = 2, 20, 26, 47
    for i in range(rows):
        for j in range(cols):
            x0 = (i - rows / 2) * deep
            y0 = (j - cols / 2) * wide
            key = "ClothWhite" if (i + j) % 2 == 0 else "CanvasDark"
            p.card(key, [(x0, y0, 0), (x0 + deep, y0, 0), (x0 + deep, y0 + wide, 0), (x0, y0 + wide, 0)], toward=(0, 0, 1000))
    return p.build()


def exclaim(name, seed):
    """The warning sign over the Skunk Ape: a chunky exclamation mark facing down the trail. Pivot is the middle."""
    p = Prop(name, seed)
    box = [(0, 3, 2, 1), (4, 5, 6, 7), (0, 1, 5, 4), (1, 2, 6, 5), (2, 3, 7, 6), (3, 0, 4, 7)]
    def slab(z0, z1, w0, w1, depth):
        return [(-depth, -w0, z0), (depth, -w0, z0), (depth, w0, z0), (-depth, w0, z0),
                (-depth, -w1, z1), (depth, -w1, z1), (depth, w1, z1), (-depth, w1, z1)]
    p.solid("Warning", slab(-14, 50, 8, 16, 9), box)      # the stroke, wider at the top
    p.solid("Warning", slab(-50, -28, 10, 10, 9), box)    # the dot
    return p.build()


def treeline(name, seed, radius, arc_deg, tree_h, count):
    """A flat row of cypress silhouettes bent round an arc, for the far distance.

    Pivot is the arc's centre at water level and the arc opens round +X; every face looks inwards.
    Several of these at growing radius, each a shade nearer the sky colour, make the swamp fade out.
    """
    p = Prop(name, seed, recalc=False)
    r = p.rng
    half = math.radians(arc_deg) / 2

    def pt(angle, z, push=0.0):
        return (math.cos(angle) * (radius + push), math.sin(angle) * (radius + push), z)

    # undergrowth: one jagged band right round the arc, so no water shows between the trunks
    seg = count * 3
    tops = [tree_h * r.uniform(0.16, 0.34) for _ in range(seg + 1)]
    for i in range(seg):
        a0 = -half + 2 * half * i / seg
        a1 = -half + 2 * half * (i + 1) / seg
        p.card("Treeline", [pt(a0, -40), pt(a1, -40), pt(a1, tops[i + 1]), pt(a0, tops[i])])
    for k in range(count):
        a = -half + 2 * half * (k + r.uniform(0.15, 0.85)) / count
        h = tree_h * r.uniform(0.62, 1.0)
        tw = h * 0.035 / radius                       # half the trunk's width, as an angle
        cw = h * r.uniform(0.30, 0.44) / radius       # half the crown's width, as an angle
        push = r.uniform(-30, 30)                     # stagger so overlapping cards do not flicker
        p.card("Treeline", [pt(a - tw * 2.6, 0, push), pt(a + tw * 2.6, 0, push), pt(a + tw, h * 0.82, push), pt(a - tw, h * 0.82, push)])
        # flat-topped crown
        p.card("Treeline", [pt(a - cw, h * 0.84, push), pt(a - cw * 0.72, h * 0.75, push), pt(a + cw * 0.72, h * 0.75, push),
                            pt(a + cw, h * 0.84, push), pt(a + cw * 0.62, h, push), pt(a - cw * 0.62, h, push)])
        if r.random() < 0.55:                         # a second, lower tier on some
            lw, lz = cw * r.uniform(0.45, 0.7), h * r.uniform(0.52, 0.66)
            off = cw * r.uniform(-0.5, 0.5)
            p.card("Treeline", [pt(a + off - lw, lz, push), pt(a + off + lw, lz, push), pt(a + off + lw * 0.6, lz + h * 0.09, push), pt(a + off - lw * 0.6, lz + h * 0.09, push)])
        for _ in range(r.randint(2, 4)):              # hanging moss
            m = a + cw * r.uniform(-0.8, 0.8)
            mw = cw * 0.07
            p.card("Treeline", [pt(m - mw, h * 0.78, push), pt(m + mw, h * 0.78, push), pt(m, h * r.uniform(0.5, 0.66), push)])
    return p.build()


PROPS = [
    cypress("SM_SAS_CypressTall", 720, 11, moss=18),
    cypress("SM_SAS_CypressMid", 540, 23, moss=15),
    cypress("SM_SAS_CypressSmall", 400, 37, moss=11),
    cattails("SM_SAS_Cattails", 5),
    lily_pads("SM_SAS_LilyPads", 3),
    log("SM_SAS_Log", 8),
    picnic_basket("SM_SAS_PicnicBasket", 1),
    picnic_blanket("SM_SAS_PicnicBlanket", 1),
    tent("SM_SAS_Tent", 1),
    campfire("SM_SAS_Campfire", 4),
    rock("SM_SAS_Rock", 6),
    grass_tuft("SM_SAS_GrassTuft", 9),
    ranger_hat("SM_SAS_RangerHat", 1),
    player_ring("SM_SAS_PlayerRing", 1),
    backpack("SM_SAS_Backpack", 1),
    stink_cloud("SM_SAS_StinkCloud", 2),
    exclaim("SM_SAS_Exclaim", 1),
    finish_line("SM_SAS_FinishLine", 1),
    treeline("SM_SAS_TreelineNear", 21, 6000, 230, 760, 62),
    treeline("SM_SAS_TreelineMid", 22, 9500, 230, 1350, 56),
    treeline("SM_SAS_TreelineFar", 23, 14000, 230, 2300, 52),
]
for ob in PROPS:
    print("PROP %s tris=%d" % (ob.name, len(ob.data.polygons)))


def render_previews():
    scene.render.engine = "BLENDER_WORKBENCH"
    scene.display.shading.light = "STUDIO"
    scene.display.shading.color_type = "MATERIAL"
    scene.display.shading.show_cavity = True
    scene.render.resolution_x = 420
    scene.render.resolution_y = 420
    world = bpy.data.worlds.new("World")
    scene.world = world
    world.color = (0.30, 0.34, 0.40)
    cam_data = bpy.data.cameras.new("Cam")
    cam_data.type = "ORTHO"
    cam_data.clip_end = 20000
    cam = bpy.data.objects.new("Cam", cam_data)
    scene.collection.objects.link(cam)
    scene.camera = cam
    for ob in PROPS:
        for other in PROPS:
            other.hide_render = other is not ob
        corners = [Vector(c) for c in ob.bound_box]
        lo = Vector((min(c.x for c in corners), min(c.y for c in corners), min(c.z for c in corners)))
        hi = Vector((max(c.x for c in corners), max(c.y for c in corners), max(c.z for c in corners)))
        center = (lo + hi) / 2
        cam_data.ortho_scale = max((hi - lo).length * 1.05, 60)
        d = Vector((0.75, -1, 0.55)).normalized()
        cam.location = center + d * 5000
        cam.rotation_mode = "QUATERNION"
        cam.rotation_quaternion = (-d).to_track_quat("-Z", "Y")
        scene.render.filepath = os.path.join(OUT_DIR, "prop_%s.png" % ob.name)
        bpy.ops.render.render(write_still=True)


def export_fbx():
    for ob in PROPS:
        bpy.ops.object.select_all(action="DESELECT")
        ob.select_set(True)
        bpy.context.view_layer.objects.active = ob
        path = os.path.join(OUT_DIR, ob.name + ".fbx")
        bpy.ops.export_scene.fbx(filepath=path, use_selection=True, object_types={"MESH"},
                                 apply_unit_scale=True, apply_scale_options="FBX_SCALE_NONE",
                                 axis_forward="-Z", axis_up="Y", mesh_smooth_type="FACE", bake_anim=False)
        print("PROP_FBX", ob.name, os.path.getsize(path))


if MODE in ("preview", "all"):
    render_previews()
if MODE in ("export", "all"):
    export_fbx()
print("PROPS_DONE")
