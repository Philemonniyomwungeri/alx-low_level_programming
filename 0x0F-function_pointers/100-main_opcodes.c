#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the function
 * @num_bytes: Number of bytes to print
 */
void print_opcodes(unsigned int num_bytes)
{
	if (num_bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	unsigned char *ptr = (unsigned char *)print_opcodes;
	unsigned int i;

	for (i = 0; i < num_bytes; ++i)
	{
		printf("%02x", *(ptr + i));
		if (i < num_bytes - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 on success, 1 on incorrect number of arguments, 2 negative input
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	print_opcodes(num_bytes);

	return (0);
}

