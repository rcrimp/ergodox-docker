# Ergodox firmware compiler 

using benblazak's ergodox firmware (rewrite branch) in a Docker container

Inspired by this Docker container https://hub.docker.com/r/lcourtois/ergodox-compiler/

## Usage:

edit layout file : firmware\keyboard\ergodox\layout\qwerty--custom.c
````
docker build -t ergodox-compiler .
docker run --rm -v ./compiled:/compiled ergodox-compiler
````

### Windows
I have issues getting the cwd (.) working under Windows 7, but '~' works fine
```
docker run --rm -v ~/Documents/GitHub/ErgodoxDocker/compiled:/compiled ergodox-compiler
```

now upload the new firmware located under compiled/firmware.hex

## TODO 

Link benblazk's firmware as a sub repo, so I don't to include it.

Upload final version to Dockerhub