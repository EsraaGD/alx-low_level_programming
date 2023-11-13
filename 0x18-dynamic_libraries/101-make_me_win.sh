#!/bin/bash
wget -P .. https://raw.githubusercontent.com/EsraaGD/alx-low_level_programming/master/0x18-dynamic_libraries/libopen.so
export LD_PRELOAD="$PWD/../libopen.so"
