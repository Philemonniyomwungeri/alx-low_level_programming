#include "main.h"
#include <unistd.h>

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to write.
 *
 * Return: On success, the character written. On error, EOF.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

