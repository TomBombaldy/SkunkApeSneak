"""Build the Skunk Ape for Skunk Ape Sneak: mesh, materials, rig, animations, previews, FBX.

Run headless:
  blender -b --python SourceArt/SkunkApe/build_skunk_ape.py -- <out_dir> [preview|export|all]

Units: the scene uses centimetres (unit scale 0.01) so the FBX imports 1:1 into Unreal.
The ape faces -Y in Blender; +X is its left.
"""
import math
import os
import random
import sys

import bpy
from mathutils import Matrix, Vector, noise

argv = sys.argv[sys.argv.index("--") + 1:] if "--" in sys.argv else []
OUT_DIR = argv[0] if argv else os.path.dirname(os.path.abspath(__file__))
MODE = argv[1] if len(argv) > 1 else "all"
os.makedirs(OUT_DIR, exist_ok=True)

random.seed(7)

# ---------------------------------------------------------------------------
# Scene
# ---------------------------------------------------------------------------
bpy.ops.wm.read_factory_settings(use_empty=True)
scene = bpy.context.scene
scene.unit_settings.system = "METRIC"
scene.unit_settings.scale_length = 0.01
scene.render.fps = 30


def link(obj):
    scene.collection.objects.link(obj)
    return obj


def ellipsoid(center, radii, subdiv=3):
    bpy.ops.mesh.primitive_ico_sphere_add(subdivisions=subdiv, radius=1.0, location=center)
    ob = bpy.context.active_object
    ob.scale = radii
    return ob


def limb(p0, p1, r0, r1, steps=7):
    """A tapered limb as a chain of overlapping spheres (fused later by the remesh)."""
    p0, p1 = Vector(p0), Vector(p1)
    parts = []
    for i in range(steps):
        t = i / (steps - 1)
        r = r0 + (r1 - r0) * t
        parts.append(ellipsoid(p0.lerp(p1, t), (r, r, r), subdiv=2))
    return parts


def tuft(base, direction, radius, length):
    """A cone of 'fur' sticking out of the body."""
    direction = Vector(direction).normalized()
    bpy.ops.mesh.primitive_cone_add(vertices=5, radius1=radius, radius2=0.0, depth=length,
                                    location=Vector(base) + direction * (length * 0.35))
    ob = bpy.context.active_object
    ob.rotation_mode = "QUATERNION"
    ob.rotation_quaternion = Vector((0, 0, 1)).rotation_difference(direction)
    return ob


# ---------------------------------------------------------------------------
# Body volumes (centimetres)
# ---------------------------------------------------------------------------
parts = []
# torso: barrel chest, belly, hips, hunched upper back
parts.append(ellipsoid((0, 2, 108), (40, 34, 30)))        # hips
parts.append(ellipsoid((0, -4, 128), (45, 39, 34)))       # belly
parts.append(ellipsoid((0, 0, 160), (54, 42, 40)))        # chest
parts.append(ellipsoid((0, 14, 176), (46, 34, 30)))       # hunched upper back
# shoulders
for s in (1, -1):
    parts.append(ellipsoid((s * 54, 2, 178), (27, 26, 25)))
# head: sunk between the shoulders, conical crown, heavy brow, muzzle
parts.append(ellipsoid((0, -12, 203), (25, 27, 27)))      # skull
parts.append(ellipsoid((0, -6, 224), (17, 19, 18)))       # crown
parts.append(ellipsoid((0, -33, 209), (22, 8, 7)))        # brow ridge
parts.append(ellipsoid((0, -35, 193), (15, 13, 12)))      # muzzle
parts.append(ellipsoid((0, -24, 186), (17, 14, 9)))       # jaw
# arms in an A-pose: long, thick forearms, big hands
for s in (1, -1):
    parts += limb((s * 60, 0, 176), (s * 98, 0, 128), 19, 17)
    parts += limb((s * 98, 0, 128), (s * 128, -4, 80), 18, 17)
    parts.append(ellipsoid((s * 136, -7, 62), (16, 15, 20)))
# legs: short and thick, big feet
for s in (1, -1):
    parts += limb((s * 24, 2, 96), (s * 30, -5, 52), 23, 19)
    parts += limb((s * 30, -5, 52), (s * 32, 2, 18), 18, 15)
    parts.append(ellipsoid((s * 33, -12, 9), (16, 28, 9)))

# shaggy fur: cones pushed out of shoulders, back, arms, head and flanks
tufts = [
    # (base, direction, radius, length)
    ((0, -2, 238), (0, 0.2, 1), 9, 20),                    # crest
    ((0, 8, 232), (0, 0.8, 0.8), 9, 18),
    ((14, -4, 228), (0.7, 0.1, 0.8), 7, 14), ((-14, -4, 228), (-0.7, 0.1, 0.8), 7, 14),
    ((24, -18, 196), (1, -0.2, -0.3), 7, 14), ((-24, -18, 196), (-1, -0.2, -0.3), 7, 14),   # cheeks
    ((0, 44, 184), (0, 1, 0.3), 12, 22), ((20, 42, 170), (0.4, 1, 0), 11, 20), ((-20, 42, 170), (-0.4, 1, 0), 11, 20),
    ((0, 40, 150), (0, 1, -0.3), 12, 20), ((24, 36, 134), (0.5, 1, -0.4), 10, 18), ((-24, 36, 134), (-0.5, 1, -0.4), 10, 18),
    ((0, 34, 112), (0, 1, -0.6), 11, 18),
]
for s in (1, -1):
    tufts += [
        ((s * 68, 6, 196), (s * 0.8, 0.2, 0.7), 10, 18),   # shoulder top
        ((s * 78, 10, 180), (s * 1, 0.4, 0.1), 10, 18),
        ((s * 84, 4, 160), (s * 1, 0.3, -0.3), 9, 16),
        ((s * 100, 6, 138), (s * 0.9, 0.5, -0.4), 9, 16),  # elbow
        ((s * 112, 6, 116), (s * 0.8, 0.6, -0.5), 8, 15),
        ((s * 124, 4, 96), (s * 0.8, 0.6, -0.6), 8, 14),
        ((s * 46, 4, 120), (s * 1, 0.2, -0.4), 10, 16),    # flank
        ((s * 44, 2, 98), (s * 1, 0.2, -0.6), 9, 15),
        ((s * 38, 6, 70), (s * 1, 0.5, -0.5), 8, 14),      # thigh
        ((s * 40, 4, 44), (s * 1, 0.4, -0.6), 7, 12),
    ]
for base, direction, radius, length in tufts:
    parts.append(tuft(base, direction, radius, length))

bpy.ops.object.select_all(action="DESELECT")
for ob in parts:
    ob.select_set(True)
bpy.context.view_layer.objects.active = parts[0]
bpy.ops.object.join()
body = bpy.context.active_object
body.name = "SkunkApe"
bpy.ops.object.transform_apply(location=True, rotation=True, scale=True)

# fuse everything into one skin, then reduce to chunky low-poly
remesh = body.modifiers.new("Remesh", "REMESH")
remesh.mode = "VOXEL"
remesh.voxel_size = 3.2
bpy.ops.object.modifier_apply(modifier=remesh.name)
dec = body.modifiers.new("Decimate", "DECIMATE")
dec.ratio = 0.085
bpy.ops.object.modifier_apply(modifier=dec.name)
tri = body.modifiers.new("Triangulate", "TRIANGULATE")
bpy.ops.object.modifier_apply(modifier=tri.name)
for poly in body.data.polygons:
    poly.use_smooth = False

# ---------------------------------------------------------------------------
# Materials: flat colours, assigned per face by region
# ---------------------------------------------------------------------------
def material(name, rgb, emission=None):
    mat = bpy.data.materials.new(name)
    mat.diffuse_color = (*rgb, 1.0)
    mat.use_nodes = True
    bsdf = mat.node_tree.nodes.get("Principled BSDF")
    bsdf.inputs["Base Color"].default_value = (*rgb, 1.0)
    bsdf.inputs["Roughness"].default_value = 0.9
    if emission:
        bsdf.inputs["Emission Color"].default_value = (*emission, 1.0)
        bsdf.inputs["Emission Strength"].default_value = 4.0
    return mat


MAT_FUR = material("M_SkunkApe_Fur", (0.46, 0.20, 0.09))
MAT_FUR_DARK = material("M_SkunkApe_FurDark", (0.27, 0.11, 0.05))
MAT_SKIN = material("M_SkunkApe_Skin", (0.10, 0.085, 0.08))
MAT_EYES = material("M_SkunkApe_Eyes", (1.0, 0.75, 0.1), emission=(1.0, 0.7, 0.1))
MAT_TEETH = material("M_SkunkApe_Teeth", (0.9, 0.86, 0.7))
for m in (MAT_FUR, MAT_FUR_DARK, MAT_SKIN, MAT_EYES, MAT_TEETH):
    body.data.materials.append(m)
FUR, FUR_DARK, SKIN, EYES, TEETH = range(5)

for poly in body.data.polygons:
    c = poly.center
    n = poly.normal
    idx = FUR
    # darker patches of fur, broken up with noise so it reads as shaggy
    if noise.noise(c * 0.035) > 0.12 or (c.y > 18 and c.z > 120):
        idx = FUR_DARK
    ax = abs(c.x)
    # face
    if c.z > 181 and c.z < 213 and ax < 19 and c.y < -27 and n.y < -0.15:
        idx = SKIN
    # chest
    if 132 < c.z < 174 and ax < 27 and c.y < -30 and n.y < -0.55:
        idx = SKIN
    # hands and feet
    if (Vector((ax, c.y, c.z)) - Vector((136, -7, 60))).length < 23:
        idx = SKIN
    if c.z < 15:
        idx = SKIN
    poly.material_index = idx


def add_part(ob, mat_index):
    """Join a small extra piece into the body with a given material."""
    ob.data.materials.clear()
    for m in body.data.materials:
        ob.data.materials.append(m)
    for poly in ob.data.polygons:
        poly.material_index = mat_index
        poly.use_smooth = False
    bpy.ops.object.select_all(action="DESELECT")
    ob.select_set(True)
    bpy.context.view_layer.objects.active = ob
    bpy.ops.object.transform_apply(location=True, rotation=True, scale=True)
    body.select_set(True)
    bpy.context.view_layer.objects.active = body
    bpy.ops.object.join()


for s in (1, -1):
    add_part(ellipsoid((s * 9.5, -40.5, 203.5), (5.2, 3.2, 4.2), subdiv=1), EYES)
    add_part(tuft((s * 6, -46, 188), (0, -0.25, -1), 2.6, 9), TEETH)    # lower fangs pointing up from the jaw
for s in (1, -1):
    ob = tuft((s * 6, -46, 186), (0, -0.2, 1), 2.4, 8)
    add_part(ob, TEETH)
add_part(ellipsoid((0, -47.5, 196), (5.5, 3.0, 3.6), subdiv=1), SKIN)    # nose

body = bpy.context.view_layer.objects.active
body.name = "SkunkApe"
print("APE_MESH tris=%d verts=%d" % (len(body.data.polygons), len(body.data.vertices)))

# ---------------------------------------------------------------------------
# Skeleton
# ---------------------------------------------------------------------------
arm_data = bpy.data.armatures.new("Armature")
arm = link(bpy.data.objects.new("Armature", arm_data))
bpy.context.view_layer.objects.active = arm
bpy.ops.object.mode_set(mode="EDIT")

BONES = [
    # name, head, tail, parent
    ("root", (0, 0, 0), (0, 0, 20), None),
    ("hips", (0, 2, 98), (0, 0, 122), "root"),
    ("spine", (0, 0, 122), (0, 2, 154), "hips"),
    ("chest", (0, 2, 154), (0, 0, 188), "spine"),
    ("head", (0, -4, 188), (0, -10, 228), "chest"),
]
for s, tag in ((1, "L"), (-1, "R")):
    BONES += [
        ("upperarm_" + tag, (s * 58, 0, 176), (s * 98, 0, 128), "chest"),
        ("forearm_" + tag, (s * 98, 0, 128), (s * 128, -4, 80), "upperarm_" + tag),
        ("hand_" + tag, (s * 128, -4, 80), (s * 138, -8, 52), "forearm_" + tag),
        ("thigh_" + tag, (s * 24, 2, 96), (s * 30, -5, 52), "hips"),
        ("shin_" + tag, (s * 30, -5, 52), (s * 32, 2, 18), "thigh_" + tag),
        ("foot_" + tag, (s * 32, 2, 18), (s * 33, -24, 5), "shin_" + tag),
    ]
for name, head, tail, parent in BONES:
    eb = arm_data.edit_bones.new(name)
    eb.head, eb.tail = head, tail
    if parent:
        eb.parent = arm_data.edit_bones[parent]
bpy.ops.object.mode_set(mode="OBJECT")

# skin the mesh to the skeleton
bpy.ops.object.select_all(action="DESELECT")
body.select_set(True)
arm.select_set(True)
bpy.context.view_layer.objects.active = arm
bpy.ops.object.parent_set(type="ARMATURE_AUTO")
if not any(len(v.groups) for v in body.data.vertices):
    print("APE_WARN automatic weights failed, falling back to envelopes")
    bpy.ops.object.parent_set(type="ARMATURE_ENVELOPE")
print("APE_SKIN groups=%d" % len(body.vertex_groups))

# The face pieces (eyes, fangs, nose) and the skull must follow the head bone only,
# otherwise automatic weights leave a stray fang behind when he moves.
head_group = body.vertex_groups["head"]
for v in body.data.vertices:
    co = v.co
    if co.z > 194 or (co.z > 176 and co.y < -38):
        for g in body.vertex_groups:
            if g.index != head_group.index:
                g.remove([v.index])
        head_group.add([v.index], 1.0, "REPLACE")

# ---------------------------------------------------------------------------
# Animation helpers: rotate bones about WORLD axes so poses are easy to reason about
# ---------------------------------------------------------------------------
bpy.context.view_layer.objects.active = arm
bpy.ops.object.mode_set(mode="POSE")
PB = arm.pose.bones
for pb in PB:
    pb.rotation_mode = "QUATERNION"
ORDER = [b[0] for b in BONES]   # parents come before children
AXES = {"X": Vector((1, 0, 0)), "Y": Vector((0, 1, 0)), "Z": Vector((0, 0, 1))}


def reset_pose():
    for pb in PB:
        pb.location = (0, 0, 0)
        pb.rotation_quaternion = (1, 0, 0, 0)
        pb.scale = (1, 1, 1)
    bpy.context.view_layer.update()


def apply_pose(pose):
    """pose: {bone: [(axis, degrees) | ("aim", (x, y, z)), ...]} plus optional '_drop' (cm the hips sink).

    Rotations are about WORLD axes and aims are WORLD directions, applied parent-first,
    so a limb can be told to hang straight down whatever the spine is doing.
    """
    reset_pose()
    drop = pose.get("_drop", 0.0)
    if drop:
        hips = PB["hips"]
        m = hips.matrix.copy()
        m.translation = m.translation + Vector((0, 0, -drop))
        hips.matrix = m
        bpy.context.view_layer.update()
    for name in ORDER:
        for kind, value in pose.get(name, []):
            pb = PB[name]
            m = pb.matrix.copy()
            pivot = m.translation.copy()
            if kind == "aim":
                current = (m.to_3x3() @ Vector((0, 1, 0))).normalized()
                rot = current.rotation_difference(Vector(value).normalized()).to_matrix().to_4x4()
            else:
                rot = Matrix.Rotation(math.radians(value), 4, AXES[kind])
            pb.matrix = Matrix.Translation(pivot) @ rot @ Matrix.Translation(-pivot) @ m
            bpy.context.view_layer.update()


def key_all(frame):
    for pb in PB:
        pb.keyframe_insert("rotation_quaternion", frame=frame)
        pb.keyframe_insert("location", frame=frame)


def make_action(name, keys):
    """keys: [(frame, pose_dict), ...]"""
    action = bpy.data.actions.new(name)
    action.use_fake_user = True
    arm.animation_data_create()
    arm.animation_data.action = action
    for frame, pose in keys:
        apply_pose(pose)
        key_all(frame)
    for fc in action.fcurves:
        for kp in fc.keyframe_points:
            kp.interpolation = "BEZIER"
    return action


def both(left):
    """Mirror a per-arm/leg pose given for the left side onto both sides."""
    out = {}
    for name, rots in left.items():
        out[name + "_L"] = rots
        mirrored = []
        for kind, value in rots:
            if kind == "aim":
                mirrored.append(("aim", (-value[0], value[1], value[2])))
            else:
                mirrored.append((kind, -value if kind in ("Y", "Z") else value))
        out[name + "_R"] = mirrored
    return out


def merged(*dicts):
    out = {}
    for d in dicts:
        out.update(d)
    return out


LEGS_STAND = {"thigh": [("aim", (0.14, -0.12, -1))], "shin": [("aim", (0.05, 0.10, -1))], "foot": [("aim", (0.04, -1, -0.5))]}
LEGS_BENT = {"thigh": [("aim", (0.16, -0.42, -1))], "shin": [("aim", (0.04, 0.30, -1))], "foot": [("aim", (0.04, -1, -0.5))]}


# Sleeping on his feet: slumped forward, head on chest, arms hanging loose
def sleep_pose(breath):
    sway = breath * 0.04
    return merged(
        {"_drop": 3.5 + breath * 1.2,
         "spine": [("X", 18 + breath * 2)], "chest": [("X", 16 + breath * 3)], "head": [("X", 32 + breath * 4)]},
        both({"upperarm": [("aim", (0.22, -0.16 - sway, -1))], "forearm": [("aim", (0.06, -0.26 - sway, -1))],
              "hand": [("aim", (0.0, -0.3, -1))]}),
        both(LEGS_BENT))


SLEEP = make_action("Sleep", [(0, sleep_pose(0)), (45, sleep_pose(1)), (90, sleep_pose(0))])


# Stirring (the warning): he straightens a little, the head comes up and starts to turn
def stir_pose(t):
    return merged(
        {"_drop": 3.5 - 2.5 * t,
         "spine": [("X", 18 - 10 * t)], "chest": [("X", 16 - 10 * t), ("Z", 16 * t)], "head": [("X", 32 - 30 * t), ("Z", 34 * t)]},
        both({"upperarm": [("aim", (0.22 + 0.25 * t, -0.16, -1))], "forearm": [("aim", (0.06 + 0.1 * t, -0.26 - 0.3 * t, -1))],
              "hand": [("aim", (0.0, -0.3, -1))]}),
        both(LEGS_BENT if t < 0.5 else LEGS_STAND))


STIR = make_action("Stir", [(0, stir_pose(0)), (8, stir_pose(0.6)), (14, stir_pose(0.45)), (21, stir_pose(1))])


# Looking: reared up tall, arms flung up and out, head scanning left and right
def look_pose(scan, shake):
    lift = 0.75 + shake * 0.12
    return merged(
        {"_drop": 0,
         "spine": [("X", -6)], "chest": [("X", -8), ("Z", 12 * scan)], "head": [("X", 16), ("Z", 28 * scan)]},
        both({"upperarm": [("aim", (0.8, -0.15, lift))], "forearm": [("aim", (0.28, -0.3, 1))],
              "hand": [("aim", (0.1, -0.55, 0.8))]}),
        both(LEGS_STAND))


LOOK = make_action("Look", [(0, look_pose(0, 0)), (15, look_pose(1, 1)), (30, look_pose(0, 0)),
                            (45, look_pose(-1, 1)), (60, look_pose(0, 0))])


# Stink blast: he hunches and shoves both arms forward at the rangers
def blast_pose(t):
    return merged(
        {"_drop": 5 * t,
         "spine": [("X", 14 * t)], "chest": [("X", 12 * t)], "head": [("X", 6 - 10 * t)]},
        both({"upperarm": [("aim", (0.8 - 0.55 * t, -0.15 - 0.85 * t, 0.75 - 0.9 * t))],
              "forearm": [("aim", (0.28 - 0.2 * t, -0.3 - 0.7 * t, 1 - 1.05 * t))],
              "hand": [("aim", (0.1, -0.55 - 0.45 * t, 0.8 - 0.8 * t))]}),
        both(LEGS_BENT if t > 0.5 else LEGS_STAND))


BLAST = make_action("Blast", [(0, blast_pose(0)), (5, blast_pose(-0.2)), (11, blast_pose(1)), (22, blast_pose(0.9)), (30, blast_pose(0))])

reset_pose()
bpy.ops.object.mode_set(mode="OBJECT")

# ---------------------------------------------------------------------------
# Preview renders (Workbench, flat material colours)
# ---------------------------------------------------------------------------
def render_previews():
    scene.render.engine = "BLENDER_WORKBENCH"
    scene.display.shading.light = "STUDIO"
    scene.display.shading.color_type = "MATERIAL"
    scene.display.shading.show_cavity = True
    scene.display.shading.show_object_outline = True
    scene.render.resolution_x = 520
    scene.render.resolution_y = 520
    scene.render.film_transparent = False
    world = bpy.data.worlds.new("World")
    scene.world = world
    world.color = (0.32, 0.36, 0.42)
    cam_data = bpy.data.cameras.new("Cam")
    cam_data.type = "ORTHO"
    cam_data.ortho_scale = 330
    cam_data.clip_end = 5000
    cam = link(bpy.data.objects.new("Cam", cam_data))
    scene.camera = cam
    target = Vector((0, 0, 125))

    def shoot(name, direction, action=None, frame=0):
        if action:
            arm.animation_data.action = action
        scene.frame_set(frame)
        d = Vector(direction).normalized()
        cam.location = target + d * 900
        cam.rotation_mode = "QUATERNION"
        cam.rotation_quaternion = (-d).to_track_quat("-Z", "Y")
        scene.render.filepath = os.path.join(OUT_DIR, "preview_%s.png" % name)
        bpy.ops.render.render(write_still=True)

    shoot("look_front", (0.0, -1, 0.12), LOOK, 0)
    shoot("look_scan", (0.5, -1, 0.15), LOOK, 15)
    shoot("sleep_back", (0.0, 1, 0.25), SLEEP, 0)
    shoot("sleep_side", (1, -0.25, 0.1), SLEEP, 45)
    shoot("stir_back", (-0.4, 1, 0.25), STIR, 21)
    shoot("blast_front", (0.6, -1, 0.15), BLAST, 12)
    arm.animation_data.action = None
    reset_like = bpy.context.view_layer
    scene.frame_set(0)
    for pb in arm.pose.bones:
        pb.location = (0, 0, 0)
        pb.rotation_quaternion = (1, 0, 0, 0)
    reset_like.update()
    shoot("rest_front", (0.35, -1, 0.1))


def export_fbx():
    """One FBX for the skinned mesh, then one per animation (a single take each imports most reliably)."""
    common = dict(use_selection=True, apply_unit_scale=True, apply_scale_options="FBX_SCALE_NONE",
                  axis_forward="-Z", axis_up="Y", add_leaf_bones=False, use_armature_deform_only=True)
    arm.animation_data.action = None
    reset_pose_object_mode()
    bpy.ops.object.select_all(action="DESELECT")
    body.select_set(True)
    arm.select_set(True)
    bpy.context.view_layer.objects.active = arm
    path = os.path.join(OUT_DIR, "SK_SkunkApe.fbx")
    bpy.ops.export_scene.fbx(filepath=path, object_types={"ARMATURE", "MESH"}, mesh_smooth_type="FACE",
                             bake_anim=False, **common)
    print("APE_FBX", path, os.path.getsize(path))

    bpy.ops.object.select_all(action="DESELECT")
    arm.select_set(True)
    bpy.context.view_layer.objects.active = arm
    for action in (SLEEP, STIR, LOOK, BLAST):
        arm.animation_data.action = action
        scene.frame_start = int(action.frame_range[0])
        scene.frame_end = int(action.frame_range[1])
        path = os.path.join(OUT_DIR, "A_SkunkApe_%s.fbx" % action.name)
        bpy.ops.export_scene.fbx(filepath=path, object_types={"ARMATURE"},
                                 bake_anim=True, bake_anim_use_all_actions=False, bake_anim_use_nla_strips=False,
                                 bake_anim_use_all_bones=True, bake_anim_force_startend_keying=True,
                                 bake_anim_simplify_factor=0.0, **common)
        print("APE_FBX", path, os.path.getsize(path))


def reset_pose_object_mode():
    for pb in arm.pose.bones:
        pb.location = (0, 0, 0)
        pb.rotation_quaternion = (1, 0, 0, 0)
    bpy.context.view_layer.update()


if MODE in ("preview", "all"):
    render_previews()
if MODE in ("export", "all"):
    export_fbx()
print("APE_DONE")
