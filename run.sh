#!/bin/bash

# Kill any existing process
pkill learning.exe

# Rebuild the project
mingw32-make -j$(nproc)

# Run the new executable
./learning.exe
