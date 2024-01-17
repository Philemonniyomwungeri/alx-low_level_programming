#include "main.h"

/**
 * _strspn - Get the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 *
 * Return: The number of characters in the initial segment of @s
 * which consist only of characters from @accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;

    while (*s != '\0')
    {
        found = 0;

        for (int i = 0; accept[i] != '\0'; i++)
        {
            if (*s == accept[i])
            {
                found = 1;
                break;
            }
        }

        if (!found)
            break;

        count++;
        s++;
    }

    return count;
}

