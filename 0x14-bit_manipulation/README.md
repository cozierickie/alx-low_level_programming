0x14. C - Bit manipulation

This repository contains a collection of C functions that demonstrate bit manipulation techniques. Bit manipulation is a fundamental concept in low-level programming, often used in systems programming, hardware control, and optimization.

Project Overview
The C - Bit Manipulation project includes a set of functions that allow you to work with binary data and perform various bit-level operations. The project tasks are designed to help you understand and apply bitwise operators, as well as to work with binary numbers in C. Here's an overview of the project tasks:

0. binary_to_uint
This function converts a binary number represented as a string to an unsigned integer. It checks the validity of the input string and returns the converted number. If there are invalid characters in the string or if the string is NULL, it returns 0.

1. print_binary
The print_binary function prints the binary representation of an unsigned long integer. It prints the binary bits from the most significant bit (left) to the least significant bit (right). This function demonstrates how to print binary data without using arrays, malloc, or division/modulus operators.

2. get_bit
The get_bit function returns the value of a bit at a given index in an unsigned long integer. It performs bitwise operations to extract the value of the specified bit. If the provided index is out of range, it returns -1.

3. set_bit
The set_bit function sets the value of a bit at a specified index to 1 in an unsigned long integer. It uses bitwise operations to manipulate the specified bit. If the provided index is out of range, it returns -1.

4. clear_bit
The clear_bit function sets the value of a bit at a specified index to 0 in an unsigned long integer. It uses bitwise operations to clear the specified bit. If the provided index is out of range, it returns -1.

5. flip_bits
The flip_bits function counts the number of bits that need to be flipped in one unsigned long integer to convert it to another unsigned long integer. It uses bitwise XOR and other bitwise operations to calculate the number of bit flips required.

100. get_endianness
The get_endianness function checks the endianness (byte order) of the machine. It returns 0 for big-endian and 1 for little-endian. This function is essential for understanding the memory layout of data on different systems.

101. Password (Advanced)
The "Password" task challenges you to find the password for the "crackme3" program. You need to discover the correct password and save it in the 101-password file. The file should contain only the password with no extra spaces or newlines.

Note: The advanced tasks in this project include finding the password for a program, which offers an additional challenge for those interested in reverse engineering and cracking.
