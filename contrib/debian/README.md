
Debian
====================
This directory contains files used to package seocoind/seocoin-qt
for Debian-based Linux systems. If you compile seocoind/seocoin-qt yourself, there are some useful files here.

## seocoin: URI support ##


seocoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install seocoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your seocoinqt binary to `/usr/bin`
and the `../../share/pixmaps/seocoin128.png` to `/usr/share/pixmaps`

seocoin-qt.protocol (KDE)

