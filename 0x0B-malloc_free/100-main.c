#include "main.h"

/**
 * main - Concatenates all arguments of the program
 * @ac: Number of arguments
 * @av:Array of arguments
 * Return: Pointer to a new string, or NULL if it fails
 */
int main(int ac, char **av)
{
	char *s;

	s = argstostr(ac, av);
	if (s == NULL)
	{
		return (1);
	}
	printf("%s", s);
	free(s);
	return (0);
}

