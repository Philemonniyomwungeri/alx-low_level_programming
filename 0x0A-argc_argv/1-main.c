#include "main.h"

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing command-line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int count;

	(void)argv; /* Suppress unused parameter warning */

	for (count = 0; count < argc; count++)
	{
		/* Iterate through each argument */
	}

	printf("%d\n", count - 1); /* Subtract 1 to exclude the program name */
	return (0);
}

