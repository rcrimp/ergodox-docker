#!/bin/bash
cd /firmware

make

cp -f *.hex /compiled
cp -f *.eep /complied