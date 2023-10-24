#include "main.h"
#include <stdlib.h>

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The characters to match in s.
 * Return: The number of bytes in the initial segment of s
 * which consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;

    while (*s)
    {
        found = 0;
        while (*accept)
        {
            if (*s == *accept)
            {
                found = 1;
                count++;
                break;
            }
            accept++;
        }
        if (found == 0)
            break;
        s++;
        accept = accept - count;
    }
    return count;
}

