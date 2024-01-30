Dynamic Libraries in C
Overview
This project focuses on creating and using dynamic libraries in C on a Linux system. The tasks involve understanding the concepts of dynamic libraries, creating them, and utilizing them in C programs.

Task 0: A library is not a luxury but one of the necessities of life

Files:
libdynamic.so: Dynamic library containing various C functions.
main.h: Header file with prototypes for the functions in the dynamic library.
0-main.c: Example program using the dynamic library.

Compilation and Testing:
$ gcc -Wall -pedantic -Werror -Wextra -L. 0-main.c -ldynamic -o len
$ export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
$ ./len

Task 1: Without libraries what have we? We have no past and no future

Files:
liball.so: Dynamic library created from all C files in the current directory.
1-create_dynamic_lib.sh: Bash script for creating the dynamic library.

Compilation and Testing:
$ ./1-create_dynamic_lib.sh
$ nm -D --defined-only liball.so

Style and Coding Standards
All code follows the Betty style.
No global variables are used.
Functions are limited to a maximum of 5 per file.
Header file (main.h) contains prototypes for all functions.
