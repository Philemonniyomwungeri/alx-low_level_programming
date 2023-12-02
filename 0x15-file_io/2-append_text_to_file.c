#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL-terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written, len;

	if (filename == NULL)
		return (-1);

	/* Open the file in append mode (O_WRONLY | O_APPEND) */
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Get the length of the text_content string */
		for (len = 0; text_content[len] != '\0'; len++)
			;

		/* Write the content to the file */
		written = write(fd, text_content, len);

		if (written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}

