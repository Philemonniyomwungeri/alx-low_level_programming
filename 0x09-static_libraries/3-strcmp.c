#include <stdio.h>

/**
 * _strcmp - Compares two strings.
 * @s1: First string
 * @s2: Second string
 * Return: 0 if s1 and s2 are equal, a negative value if s1 is less than s2,
 *         or a positive value if s1 is greater than s2.
 */
int _strcmp(const char *s1, const char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *s1 = "Hello";
	const char *s2 = "World";

	int result = _strcmp(s1, s2);
	printf("Comparison result: %d\n", result);

	return (0);
}

