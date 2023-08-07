# 0x14. C - Bit Manipulation

This repository contains the solutions for the "0x14. C - Bit Manipulation" project tasks.

## General Info

In this project, we explore the concept of bit manipulation and practice using bitwise operators to perform various operations on bits.

## Technologies Used

The project was developed using:

* C programming language
* Ubuntu 20.04 LTS
* GCC compiler

## Tasks

The project includes solutions for the following tasks:

0-binary_to_uint.c: This file contains the implementation of a function that converts a binary number represented as a string to an unsigned integer.

1-print_binary.c: This file contains the implementation of a function that prints the binary representation of a decimal number.

2-get_bit.c: This file contains the implementation of a function that returns the value of a bit at a given index in a decimal number.

3-set_bit.c: This file contains the implementation of a function that sets the value of a bit at a given index to 1 in a decimal number.

4-clear_bit.c: This file contains the implementation of a function that sets the value of a bit at a given index to 0 in a decimal number.

5-flip_bits.c: This file contains the implementation of a function that counts the number of bits that need to be flipped to convert one number to another.

100-get_endianness.c: This file contains the implementation of a function that checks the endianness of a machine and returns 0 for big endian and 1 for little endian.

101-password: In this task, the goal is to find the password for the program crackme3 and save it in a file named 101-password. The provided program should be executed with the password as an argument. Upon successful entry of the correct password, the program will output "Congratulations!"
## Usage

To compile and run the code for each task, you can follow these steps:

1. Clone the repository: `git clone https://github.com/cozierickie/alx-low_level_programming.git`
2. Navigate to the directory of the task you want to test: `cd 0x14-bit_manipulation`
3. Compile the code: `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <task-main-file> <task-file> -o task`
4. Run the compiled program: `./task`

For example, to test the first task:

```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-binary_to_uint.c -o binary_to_uint
./binary_to_uint
