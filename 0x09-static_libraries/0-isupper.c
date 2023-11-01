#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'A';

	if (isupper(ch))
	{
		printf("The character is an uppercase letter.\n");
	}
	else
	{
		printf("The character is not an uppercase letter.\n");
	}

	return (0);
}

