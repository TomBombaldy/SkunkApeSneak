# Skunk Ape Sneak

A four-player minigame for [Super Bionic Bash](https://limbitless-solutions.org/), made for the Limbitless x UCF x UU Game Jam (theme: Florida & Utah folklore).

The Skunk Ape of the Florida swamps has swiped the campers' picnic baskets. You are junior park rangers sneaking up to get them back while he snoozes. Freeze when he turns around, or get stink-blasted back down the trail.

## How to play

- Light flex: one quick step.
- Medium flex: two steps.
- Strong flex: a four-step leap that leaves you in the air for a full second.
- A red warning ball and a ping appear just before the Skunk Ape turns around. Anyone still moving while he looks is knocked back three steps.
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
- Built with Claude (Anthropic) driving the Unreal Editor.

## Asset credits

All art, animation and framework code comes from Limbitless Solutions' BashMinigameResources (MIT): the modular ranger character and animations, the Minotony character standing in as the Skunk Ape, and the Shadow and Serenity theme props.

## License

MIT. See [LICENSE](LICENSE).
