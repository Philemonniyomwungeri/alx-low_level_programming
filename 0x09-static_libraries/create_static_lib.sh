#!/bin/bash

# Compile all .c files and create object files
gcc -Wall -pedantic -Werror -Wextra -c *.c

# Create the static library
ar -rc liball.a *.o

# Clean up object files
rm -f *.o

