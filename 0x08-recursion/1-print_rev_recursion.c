#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed in reverse
 *
 * Description: This function prints a string in reverse by calling
 * itself recursively until it reaches the end of the string, then
 * prints the characters in reverse order.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

