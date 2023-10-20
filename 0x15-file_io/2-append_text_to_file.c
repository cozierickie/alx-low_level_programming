#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file to append text to.
 * @text_content: the content to append to the file.
 *
 * Return: 1 if the file exists and the operation succeeds. -1 if the file
 * does not exist or if the operation fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nletters, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(fd, text_content, nletters);

		if (rwr == -1 || rwr != nletters)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
