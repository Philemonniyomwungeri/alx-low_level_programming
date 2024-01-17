#include "main.h"

/**
 * _strncat - Concatenate two strings up to n characters.
 * @dest: Destination string.
 * @src: Source string.
 * @n: Maximum number of characters to concatenate.
 *
 * Return: A pointer to the resulting string @dest.
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

    /* Append each character from src to dest, up to n characters */
    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    /* Null-terminate the resulting string */
    dest[dest_len + i] = '\0';

    return dest;
}

