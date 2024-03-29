# atkmm
atkmm is the C++ binding for the ATK library.
This module is part of the GNOME C++ bindings effort <http://www.gtkmm.org/>.

# Building

Whenever possible, you should use the official binary packages approved by the
supplier of your operating system, such as your Linux distribution.

## Building on Windows

See README.win32

## Building from a release tarball

Extract the tarball and go to the extracted directory:
```
  $ tar xf atkmm-@ATKMM_VERSION@.tar.xz
  $ cd atkmm-@ATKMM_VERSION@
```

It's easiest to build with Meson, if the tarball was made with Meson,
and to build with Autotools, if the tarball was made with Autotools.
Then you don't have to use maintainer-mode.

How do you know how the tarball was made? If it was made with Meson,
it contains files in untracked/atk/atkmm/ and other subdirectories
of untracked/.

### Building from a tarball with Meson

Don't call the builddir 'build'. There is a directory called 'build' with
files used by Autotools.
```
  $ meson --prefix /some_directory --libdir lib your_builddir .
  $ cd your_builddir
```
If the tarball was made with Autotools, you must enable maintainer-mode:
```
  $ meson configure -Dmaintainer-mode=true
```

Then, regardless of how the tarball was made:
```
  $ ninja
  $ ninja install
```
### Building from a tarball with Autotools

If the tarball was made with Autotools:
```
  $ ./configure --prefix=/some_directory
```
If the tarball was made with Meson, you must enable maintainer-mode:
```
  $ ./autogen.sh --prefix=/some_directory
```
Then, regardless of how the tarball was made:
```
  $ make
  $ make install
```
## Building from git

Building from git can be difficult so you should prefer building from
a release tarball unless you need to work on the atkmm code itself.

jhbuild can be a good help
- https://gitlab.gnome.org/GNOME/jhbuild
- https://wiki.gnome.org/Projects/Jhbuild
- https://gnome.pages.gitlab.gnome.org/jhbuild

### Building from git with Meson

Maintainer-mode is enabled by default when you build from a git clone.

Don't call the builddir 'build'. There is a directory called 'build' with
files used by Autotools.
```
  $ meson --prefix /some_directory --libdir lib your_builddir .
  $ cd your_builddir
  $ ninja
  $ ninja install
```
You can create a tarball like so:
```
  $ ninja dist
```
### Building from git with Autotools
```
  $ ./autogen.sh --prefix=/some_directory
  $ make
  $ make install
```
You can create a tarball like so:
```
  $ make distcheck
```
or
```
  $ make dist
```
