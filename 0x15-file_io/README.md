# 0x15. C - File I/O

This repository contains C programs that demonstrate various aspects of file input and output operations.

## Description

This project focuses on learning how to work with file descriptors and perform file I/O operations in the C programming language. The tasks cover topics such as reading from and writing to files, creating and appending to files, and copying the content of one file to another.

## Tasks

### Task 0: Tread lightly, she is near

Write a function that reads a text file and prints it to the POSIX standard output.

- Prototype: `ssize_t read_textfile(const char *filename, size_t letters)`
- `letters` is the number of letters it should read and print
- Returns the actual number of letters it could read and print
- Returns 0 if the file cannot be opened or read
- Returns 0 if `filename` is NULL
- Returns 0 if write fails or does not write the expected amount of bytes

### Task 1: Under the snow

Create a function that creates a file.

- Prototype: `int create_file(const char *filename, char *text_content)`
- `filename` is the name of the file to create
- `text_content` is a NULL terminated string to write to the file
- Returns 1 on success, -1 on failure

### Task 2: Speak gently, she can hear

Write a function that appends text at the end of a file.

- Prototype: `int append_text_to_file(const char *filename, char *text_content)`
- `filename` is the name of the file
- `text_content` is the NULL terminated string to add at the end of the file
- Returns 1 on success, -1 on failure

### Task 3: cp

Write a program that copies the content of a file to another file.

- Usage: `cp file_from file_to`
- If the number of arguments is incorrect, exit with code 97 and print Usage: `cp file_from file_to`
- If `file_to` already exists, truncate it
- If `file_from` does not exist or cannot be read, exit with code 98 and print Error: `Can't read from file NAME_OF_THE_FILE`
- If you cannot create or write to `file_to`, exit with code 99 and print Error: `Can't write to NAME_OF_THE_FILE`
- If you cannot close a file descriptor, exit with code 100 and print Error: `Can't close fd FD_VALUE`
- Permissions of the created file: `rw-rw-r--`

### Task 4: elf

Write a program that displays the information contained in the ELF header at the start of an ELF file.


## Usage

Compile the C programs using the provided compilation commands and run the resulting executable files.

