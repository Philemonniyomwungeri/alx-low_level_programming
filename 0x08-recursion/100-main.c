#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int r;

    r = is_palindrome("level");/* no space warning */
    printf("%d\n", r);
    r = is_palindrome("redder");/* no space warning */
    printf("%d\n", r);
    /* ... rest of the code ... */
    return (0);
}

