dmenu - dynamic menu
====================
dmenu is an efficient dynamic menu for X.

## Patches
- [alpha](https://tools.suckless.org/dmenu/patches/alpha/)
- [border](https://tools.suckless.org/dmenu/patches/border/)
- [case-insensitive](https://tools.suckless.org/dmenu/patches/case-insensitive/)
- [center](https://tools.suckless.org/dmenu/patches/center/)
- [fuzzymatch](https://tools.suckless.org/dmenu/patches/fuzzymatch/)
- [fuzzyhighlight](https://tools.suckless.org/dmenu/patches/fuzzyhighlight/)
- [grid](https://tools.suckless.org/dmenu/patches/grid/)
- [gridnav](https://tools.suckless.org/dmenu/patches/gridnav/)


Requirements
------------
In order to build dmenu you need the Xlib header files.


Installation
------------
Edit config.mk to match your local setup (dmenu is installed into
the /usr/local namespace by default).

Afterwards enter the following command to build and install dmenu
(if necessary as root):

    make clean install


Running dmenu
-------------
See the man page for details.
