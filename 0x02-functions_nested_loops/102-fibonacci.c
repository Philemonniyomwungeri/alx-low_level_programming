#include <stdio.h>
#include "main.h"

/**
 * print_fibonacci - Prints the first 50 Fibonacci numbers
 */
void print_fibonacci(void)
{
    int i;
    unsigned long fib1 = 1, fib2 = 2, temp;

    printf("%lu, %lu", fib1, fib2);

    for (i = 3; i <= 50; i++)
    {
        temp = fib1 + fib2;
        printf(", %lu", temp);
        fib1 = fib2;
        fib2 = temp;
    }

    printf("\n");
}

