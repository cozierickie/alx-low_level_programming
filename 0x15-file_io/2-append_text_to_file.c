#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	/* Determine the length of the text_content string */
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
	}

	/* Open the file for writing and append mode, or create if it doesn't exist */
	fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0600);
	if (fd == -1)
		return (-1);

	/* Write the content to the end of the file */
	if (text_content != NULL)
	{
		w = write(fd, text_content, len);
		if (w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
