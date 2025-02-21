#!/bin/bash

# Kill the existing process
pkill 3D-RENDERER.exe

# Rebuild the project
mingw32-make -j$(nproc)

# Run the new executable
./3D-RENDERER.exe
