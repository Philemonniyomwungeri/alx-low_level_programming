#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: The string to search.
 * @accept: The set of bytes to search for.
 *
 * Return: A pointer to the first occurrence in @s of any byte in @accept,
 * or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s != '\0')
    {
        char *ptr = accept;

        while (*ptr != '\0')
        {
            if (*s == *ptr)
                return s;
            ptr++;
        }

        s++;
    }

    return NULL;
}

