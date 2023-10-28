#include "main.h"

/**
 * _strncat - Concatenates two strings with n bytes from src.
 * @dest: Pointer to destination string.
 * @src: Pointer to source string.
 * @n: Number of bytes to be concatenated.
 *
 * Return: Pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	/* Find the length of the destination string */
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	/* Concatenate src to dest, up to n bytes */
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/* Null-terminate the resulting string */
	dest[dest_len + i] = '\0';

	return (dest);
}

