#!/bin/bash
curl -L -O  https://raw.githubusercontent.com/TobiLight/0x18-dynamic_libraries/librand.so; mv librand.so /tmp/
export LD_PRELOAD="/tmp/librand.so"
