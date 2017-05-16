#!/bin/bash
cd /firmware

make

cp -f firmware.* /compiled