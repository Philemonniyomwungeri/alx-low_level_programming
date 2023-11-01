#include <stdio.h>

void _puts(const char *str)
{
    while (*str)
    {
        putchar(*str);
        str++;
    }
    putchar('\n');
}

