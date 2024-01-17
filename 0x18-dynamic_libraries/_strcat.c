#include "main.h"

/**
 * _strcat - Concatenate two strings.
 * @dest: Destination string.
 * @src: Source string.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
    int dest_len = 0;
    int i;

    /* Find the length of the destination string */
    while (dest[dest_len] != '\0')
    {
        dest_len++;
    }

    /* Append each character from src to dest */
    for (i = 0; src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    /* Null-terminate the resulting string */
    dest[dest_len + i] = '\0';

    return dest;
}

