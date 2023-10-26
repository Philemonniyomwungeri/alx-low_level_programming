#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion
 * @s: The input string to be printed
 */
void _puts_recursion(char *s)
{
    if (*s == '\0')
    {
        putchar('\n'); // assuming you have _putchar function implemented, or you can use putchar from stdio.h
        return;
    }

    putchar(*s); // assuming you have _putchar function implemented, or you can use putchar from stdio.h
    _puts_recursion(s + 1);
}

