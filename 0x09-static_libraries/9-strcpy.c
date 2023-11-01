#include <stdio.h>

/**
 * _strcpy - Copies a string to a buffer.
 * @dest: Destination buffer
 * @src: Source string
 * Return: Pointer to destination buffer
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];

	dest[i] = '\0';

	return (dest);
}

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	const char *source = "Hello, Betty!";
	char destination[20];

	_strcpy(destination, source);
	printf("Copied string: %s\n", destination);

	return (0);
}

