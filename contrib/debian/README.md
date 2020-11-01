
Debian
====================
This directory contains files used to package skicoind/skicoin-qt
for Debian-based Linux systems. If you compile skicoind/skicoin-qt yourself, there are some useful files here.

## skicoin: URI support ##


skicoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install skicoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your skicoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/skicoin128.png` to `/usr/share/pixmaps`

skicoin-qt.protocol (KDE)

