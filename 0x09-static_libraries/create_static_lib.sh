#!/bin/bash

# Collect all .c files in the current directory
C_FILES=$(ls *.c)

# Compile each .c file into a .o object file
for FILE in $C_FILES; do
  gcc -Wall -Werror -Wextra -pedantic -c "$FILE"
done

# Create a static library from all the .o object files
ar -rc liball.a *.o

# Index the static library for faster linking
ranlib liball.a

# Clean up the .o object files
rm *.o
