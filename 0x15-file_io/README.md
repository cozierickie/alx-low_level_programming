0x15. C - File I/O

Task Descriptions
0. Tread lightly, she is near
Write a function read_textfile that reads a text file and prints it to the POSIX standard output.

Prototype: ssize_t read_textfile(const char *filename, size_t letters)
letters is the number of letters to read and print
Returns the actual number of letters it could read and print
If the file cannot be opened or read, return 0
If filename is NULL, return 0
If write fails or does not write the expected amount of bytes, return 0
1. Under the snow
Create a function create_file that creates a file.

Prototype: int create_file(const char *filename, char *text_content)
filename is the name of the file to create
text_content is a NULL-terminated string to write to the file
Returns 1 on success, -1 on failure
The created file must have the permissions: rw-------
If the file already exists, do not change the permissions
If the file already exists, truncate it
If filename is NULL, return -1
If text_content is NULL, create an empty file
2. Speak gently, she can hear
Write a function append_text_to_file that appends text at the end of a file.

Prototype: int append_text_to_file(const char *filename, char *text_content)
filename is the name of the file
text_content is the NULL-terminated string to add at the end of the file
Return 1 on success and -1 on failure
Do not create the file if it does not exist
If filename is NULL, return -1
If text_content is NULL, do not add anything to the file
3. cp
Write a program that copies the content of a file to another file.

Usage: cp file_from file_to
If the number of arguments is incorrect, exit with code 97 and print "Usage: cp file_from file_to" on the POSIX standard error
If file_to already exists, truncate it
If file_from does not exist or cannot be read, exit with code 98 and print "Error: Can't read from file NAME_OF_THE_FILE" on the POSIX standard error, where NAME_OF_THE_FILE is the first argument passed to your program
If you cannot create or if write to file_to fails, exit with code 99 and print "Error: Can't write to NAME_OF_THE_FILE" on the POSIX standard error, where NAME_OF_THE_FILE is the second argument passed to your program
If you cannot close a file descriptor, exit with code 100 and print "Error: Can't close fd FD_VALUE" on the POSIX standard error, where FD_VALUE is the value of the file descriptor
Permissions of the created file: rw-rw-r--
If the file already exists, do not change the permissions
Read 1,024 bytes at a time from file_from to make fewer system calls
Use a buffer
You are allowed to use dprintf
4. elf (Advanced)
Write a program that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename
Displayed information includes Magic, Class, Data, Version, OS/ABI, ABI Version, Type, and Entry point address
If the file is not an ELF file or if there is an error, exit with status code 98 and display a comprehensive error message to stderr
You are allowed to use lseek once
You are allowed to use read a maximum of 2 times at runtime
You are allowed to have as many functions as you want in your source file
You are allowed to use printf
