#include <stdlib.h>

/**
 * custom_strdup - Returns a pointer to a newly allocated space in memory,
 *                 which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if memory allocation fails.
 */
char *custom_strdup(char *str)
{
	char *duplicate;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	duplicate = malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		duplicate[i] = str[i];

	return (duplicate);
}

