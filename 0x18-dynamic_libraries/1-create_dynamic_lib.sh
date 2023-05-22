#!/bin/bash

# Collect all .c files in the current directory
c_files=$(find . -maxdepth 1 -type f -name "*.c")

# Compile the .c files into object files
for file in $c_files; do
    gcc -c -fPIC "$file" -o "${file%.c}.o"
done

# Create the dynamic library liball.so
gcc -shared -o liball.so *.o

# Cleanup: Remove the object files
rm -f *.o
