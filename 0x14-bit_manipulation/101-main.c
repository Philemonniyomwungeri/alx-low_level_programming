#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point of the program.
 *
 * @argc: Number of command line arguments.
 * @argv: Array containing command line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <password>\n", argv[0]);
		return (EXIT_FAILURE);
	}

	char *password = argv[1];
	char command[100];

	snprintf(command, sizeof(command), "./crackme3 %s", password);

	int result = system(command);

	if (WIFEXITED(result) && WEXITSTATUS(result) == 0)
	{
		printf("Congratulations!\n");
	}
	else
	{
		printf("Try again!\n");
	}

	return (EXIT_SUCCESS);
}

