#include "main.h"

/**
 * _strcpy - Copy a string to a destination buffer.
 * @dest: Destination buffer.
 * @src: Source string.
 *
 * Return: A pointer to the destination buffer @dest.
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }

    /* Null-terminate the destination string */
    dest[i] = '\0';

    return dest;
}

