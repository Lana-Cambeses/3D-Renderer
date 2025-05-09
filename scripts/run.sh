#!/bin/bash

# Set the output executable name
OUTPUT="learning"

# Remove previous executable if it exists
rm -f $OUTPUT.exe

# Compile the program
echo "Compiling $OUTPUT.cpp..."
g++ -o $OUTPUT learning.cpp -mconsole

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful. Running program..."
    ./$OUTPUT.exe
else
    echo "Compilation failed!"
fi
