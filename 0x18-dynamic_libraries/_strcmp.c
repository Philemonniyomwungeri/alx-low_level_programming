#include "main.h"

/**
 * _strcmp - Compare two strings.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: 0 if the strings are equal, a negative value if s1 is less than s2,
 * or a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 != '\0' && *s2 != '\0')
    {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
    }

    /* Check for null character */
    if (*s1 == '\0' && *s2 == '\0')
        return 0;
    else if (*s1 == '\0')
        return -(*s2);
    else
        return *s1;
}

