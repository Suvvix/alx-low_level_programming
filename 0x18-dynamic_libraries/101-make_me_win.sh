#!/bin/bash
wget -P /tmp https://github.com/sadatmisr/alx/raw/main/0x18-Dynamic_libraries/libgiga.so
export LD_PRELOAD=/tmp/libgiga.so
