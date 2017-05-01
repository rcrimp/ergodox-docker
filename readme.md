Docker container for benblazak's ergodox firmware (rewrite branch)

Usage:

edit layout file : firmware\keyboard\ergodox\layout\qwerty--custom.c

$ docker build -t ergodox-compiler .
$ docker run --rm -v ~/Documents/GitHub/ergodox-firmware/compiled:/compiled ergodox-compiler

compiled firmware will now be in compiled/ directory