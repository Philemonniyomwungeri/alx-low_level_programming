#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    char *s = "hello, world";
    char *accept = "oleh";
    unsigned int n;

    n = _strspn(s, accept);
    printf("%u\n", n);
    return (0);
}

