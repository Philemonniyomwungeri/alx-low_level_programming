#include "main.h"

/**
 * _memset - Fill memory with a constant byte.
 * @s: Pointer to the memory area.
 * @b: Value to be set.
 * @n: Number of bytes to be set to the value.
 *
 * Return: A pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        s[i] = b;
    }

    return s;
}

