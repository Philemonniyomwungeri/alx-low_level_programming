#include "main.h"
#include <stdlib.h>

/**
 * strtow - Splits a string into words.
 * @str: The input string
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, k, word_count = 0, word_len = 0;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	/* Count the number of words in the string */
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; k < word_count; k++)
	{
		while (str[i] == ' ')
			i++;
		for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
			word_len++;
		words[k] = malloc((word_len + 1) * sizeof(char));
		if (words[k] == NULL)
		{
			while (k >= 0)
				free(words[--k]);
			free(words);
			return (NULL);
		}
		for (j = 0; str[i] != ' ' && str[i] != '\0'; i++, j++)
			words[k][j] = str[i];
		words[k][j] = '\0';
		word_len = 0;
	}
	words[word_count] = NULL;
	return (words);
}

