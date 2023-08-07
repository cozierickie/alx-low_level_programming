#include "main.h"

/**
 * create_file - Creates a new file and writes content to it.
 * @filename: The name of the file to be created.
 * @text_content: The content to be written to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	int num_letters;
	int write_result;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	write_result = write(file_descriptor, text_content, num_letters);
	if (write_result == -1)
		return (-1);

	close(file_descriptor);

	return (1);
}
