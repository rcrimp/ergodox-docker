Docker container for benblazak's ergodox firmware (rewrite branch)

Usage:

edit layout file : firmware\keyboard\ergodox\layout\qwerty--custom.c

$ docker build -t ergodox-compiler .
$ docker run --rm -v compiled:/compiled ergodox-compiler

now upload the new firmware located under compiled/firmware.hex