#!/bin/bash
curl -L -O https://raw.githubusercontent.com/TobiLight/alx-low_level_programming/main/0x18-dynamic_libraries/librand.so
export LD_PRELOAD="$PWD/librand.so"
