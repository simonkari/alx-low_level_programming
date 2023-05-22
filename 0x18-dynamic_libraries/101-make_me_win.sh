#!/bin/bash
wget -O /tmp/win.so https://github.com/simonkari/alx-low_level_programming/raw/master/0x18-dynamic_libs/win.so
export LD_PRELOAD=/tmp/win.so
export LD_LIBRARY_PATH=/tmp/win.so