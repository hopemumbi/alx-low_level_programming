#!/bin/bash
# The above line specifies that this script should be executed using the Bash shell.

# Compile all .c files in the current directory into object files
gcc -c *.c

# Create a static library named liball.a from the generated object files
#r: Replace or add the object files (*.o) to the archive.
#c: Create the archive if it does not exist. 
#s: Write an index into the archive.

ar rcs liball.a *.o

# Clean up by removing the temporary object files
rm *.o
