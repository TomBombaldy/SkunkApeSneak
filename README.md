# Skunk Ape Sneak

A four-player minigame for [Super Bionic Bash](https://limbitless-solutions.org/), made for the Limbitless x UCF x UU Game Jam (theme: Florida & Utah folklore).

The Skunk Ape of the Florida swamps has swiped the campers' picnic baskets. You are junior park rangers sneaking up to get them back while he snoozes. Freeze when he turns around, or get stink-blasted back down the trail.

## How to play

- Light flex: one careful step.
- Medium flex: two steps.
- Strong flex: a four-step leap. It covers ground fastest, but you are stuck in the air for almost a second.
- A red exclamation mark and a ping appear just before the Skunk Ape turns around. Anyone still moving while he looks gets stink-blasted back five steps.
- The first ranger to reach the baskets wins. If nobody makes it before time runs out, the ranger who got farthest wins.

### Keyboard controls (no flex controller needed)

| Key | Action |
|---|---|
| I | Light flex |
| O | Medium flex |
| P | Strong flex |
| Q | Ready all players (editor debug) |
| 1-4 | Set the player count (editor debug) |
| B | Hand rangers 2-4 to the computer (editor debug) |

## Opening the project

1. Install Unreal Engine 5.6.1 and Git LFS.
2. Clone this repository.
3. Open `SkunkApeSneak.uproject`. If Unreal offers to convert the project, choose More Options > Skip the Conversion.
4. Open the level `Content/SkunkApeSneak/SkunkApeSneak` and press Play.

The `Plugins` folder contains the organizers' minigame framework from [BashMinigameResources](https://github.com/LimbitlessSolutionsInc/BashMinigameResources).

## Team

- Richard Farland: design and direction.
- Built with Claude (Anthropic) driving the Unreal Editor and Blender: Blueprints, level, models and animation.

## Asset credits

Made for this jam (MIT, in this repository):

- The Skunk Ape model, rig and animations, built by script in Blender: `SourceArt/SkunkApe/build_skunk_ape.py`.
- The swamp props (cypress trees, cattails, lily pads, logs, rocks, the campsite and picnic baskets) and the rangers' hats, backpacks and player rings: `SourceArt/SwampProps/build_swamp_props.py`.
- The level, materials, Blueprints and HUD under `Content/SkunkApeSneak`.

From Limbitless Solutions' [BashMinigameResources](https://github.com/LimbitlessSolutionsInc/BashMinigameResources) (MIT):

- The minigame framework and flex-controller input (MinigameCore, BashCore, LimbitlessBluetoothPlugin).
- The modular ranger character and its idle, jump, defeat and clapping animations.
- The night sky and moon materials, the grass and dirt textures, the master material, and a few Shadow-theme trees.
- Sound effects from the example minigames (hop, knock-back, win and the ape's rumble).

## License

MIT. See [LICENSE](LICENSE).
