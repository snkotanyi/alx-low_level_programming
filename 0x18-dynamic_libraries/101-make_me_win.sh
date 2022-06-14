#!/bin/bash
wget -P /tmp/ https://raw.github.com/snkotanyi/alx-low_level_programming/tree/main/0x18-dynamic_librariest/nrandom.so
export LD_PRELOAD=/tmp/nrandom.so
