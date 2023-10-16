#!/bin/bash

# Find all .c files in the current directory
c_files=$(find . -maxdepth 1 -name "*.c")

# Check if any .c files were found
if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile the .c files into a shared library (liball.so)
gcc -shared -o liball.so $c_files
