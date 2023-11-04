#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program
 * @ac: Number of arguments
 * @av: Array of arguments
 *
 * Return: Pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, len, total_len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate total length of all arguments */
	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
			total_len++;
		total_len++; /* for newline character */
	}

	/* Allocate memory for the concatenated string */
	str = malloc(sizeof(char) * (total_len + 1));

	if (str == NULL)
		return (NULL);

	/* Copy arguments to the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len]; len++)
			str[index++] = av[i][len];
		str[index++] = '\n';
	}

	str[index] = '\0'; /* Add null terminator */
	return (str);
}

