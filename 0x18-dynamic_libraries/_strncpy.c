#include "main.h"

/**
 * _strncpy - Copy n characters from source to destination.
 * @dest: Destination buffer.
 * @src: Source string.
 * @n: Number of characters to copy.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[i] = src[i];
    }

    /* If n is greater than the length of src, fill the remaining with null bytes */
    for (; i < n; i++)
    {
        dest[i] = '\0';
    }

    return dest;
}

