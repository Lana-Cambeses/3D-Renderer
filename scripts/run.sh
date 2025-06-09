#!/bin/bash

SRC="course-learning/learning.cpp"
OUT="course-learning/learning.exe"

echo "Compiling $SRC..."
g++ "$SRC" -o "$OUT"

if [ $? -eq 0 ]; then
    echo "✅ Compilation successful. Running..."
    ./"$OUT"
else
    echo "❌ Compilation failed."
fi
