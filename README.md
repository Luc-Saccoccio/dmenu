# My dmenu build

I added the following things to vanilla dmenu:
- Reads Xresources (so it's pywal compatible).
- Alpha patch (can be transparent).
- Number of available options over total options printed on the right side of dmenu.
- Emoji support ! [`libxft-bgra`](https://github.com/uditkarode/libxft-bgra) required.
- `-P` for password mode: hide user input.
- `-r` to reject non-matching input.
- `-c` to center dmenu.
- `-mw` to set the width of centered dmenu.
- `-bw` to set border width of centered dmenu.

## Installation

You must have `libxft-bgra` installed until the libxft upstream is fixed.

Modify the config as you want, and then `make`, `sudo make install` it.
