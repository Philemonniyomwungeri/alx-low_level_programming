#!/bin/bash

# Create a dynamic library named liball.so from all .c files in the current directory

# Find all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$c_files" ]; then
  echo "No .c files found in the current directory."
  exit 1
fi

# Compile the .c files into a dynamic library
gcc -Wall -Werror -fpic -shared -o liball.so $c_files

# Check if compilation was successful
if [ $? -eq 0 ]; then
  echo "Dynamic library liball.so created successfully."
else
  echo "Error: Compilation failed."
fi

