#!/bin/bash
curl -L -O https://github.com/TobiLight/alx-low_level_programming/blob/main/0x18-dynamic_libraries/librand.so
export LD_PRELOAD=$PWD/librand.so
