#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: On success 1.
 * On error, -l is returned, and erno is set appropriately.
 */

int _pitchar(char c)

{
	return (write(1,&c, 1));

}
