#!/bin/bash
wget -P /tmp https://github.com/Suvvix/alx/raw/main/0x18-Dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
