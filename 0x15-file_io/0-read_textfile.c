#include "main.h"

/**
 * read_textfile - Reads a text file and outputs a specified number of letters.
 * @filename: The name of the file to read.
 * @letters: The number of letters to print.
 *
 * Return: The number of letters printed. Returns 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_descriptor;
	ssize_t write_result;
	ssize_t total_bytes_read;

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	total_bytes_read = read(file_descriptor, buffer, letters);
	write_result = write(STDOUT_FILENO, buffer, total_bytes_read);

	free(buffer);
	close(file_descriptor);

	return (write_result);
}
