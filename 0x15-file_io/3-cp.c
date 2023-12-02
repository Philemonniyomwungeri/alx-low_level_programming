#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * main - Copy the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success, 97, 98, 99, or 100 on failure
 */
int main(int argc, char **argv)
{
	int file_from, file_to, r, w;
	char buffer[1024];

	if (argc != 3)
		dprintf(2, "Usage: %s file_from file_to\n", argv[0]), exit(97);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((r = read(file_from, buffer, 1024)) > 0)
	{
		w = write(file_to, buffer, r);
		if (w == -1 || w != r)
			dprintf(2, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (r == -1)
		dprintf(2, "Error: Can't read from file %s\n", argv[1]), exit(98);

	if (close(file_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_from), exit(100);

	if (close(file_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
