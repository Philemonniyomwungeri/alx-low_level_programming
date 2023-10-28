#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be scanned.
 * @accept: The string containing the characters to match.
 * Return: The number of characters in the initial segment of s
 * which consist only of characters from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				count++;
				break;
			}
		}
		if (found == 0)
			break;
	}

	return (count);
}

