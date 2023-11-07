#include <stdio.h>

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing command-line arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Suppress unused parameter warning */

	printf("%s\n", argv[0]); /* Print the program name */

	return (0); /* Indicate successful execution */
}

