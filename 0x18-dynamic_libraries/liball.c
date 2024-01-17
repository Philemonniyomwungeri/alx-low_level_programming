#!/bin/bash

# Compile all .c files into object files
gcc -fPIC -c *.c

# Create the dynamic library with all object files
gcc -shared -o liball.so *.o

# Remove the object files
rm *.o

