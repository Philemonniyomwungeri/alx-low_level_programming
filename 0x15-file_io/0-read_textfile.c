#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         0 if the file cannot be opened or read, if filename is NULL,
 *         or if write fails to write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesRead, bytesWritten;

	if (filename == NULL)
	{
		dprintf(2, "Error: filename is NULL\n");
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Couldn't open file %s\n", filename);
		perror("open");
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		dprintf(2, "Error: Memory allocation failed\n");
		close(fd);
		perror("malloc");
		return (0);
	}

	bytesRead = read(fd, buffer, letters);
	if (bytesRead == -1)
	{
		dprintf(2, "Error: Couldn't read from file %s\n", filename);
		perror("read");
		close(fd);
		free(buffer);
		return (0);
	}

	bytesWritten = write(STDOUT_FILENO, buffer, bytesRead);
	if (bytesWritten == -1 || (size_t)bytesWritten != (size_t)bytesRead)
	{
		dprintf(2, "Error: Couldn't write to standard output\n");
		perror("write");
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (bytesRead);
}

