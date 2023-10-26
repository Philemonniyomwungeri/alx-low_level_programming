#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int n, result;

    n = 1;
    result = is_prime_number(n);
    printf("%d is prime: %d\n", n, result);

    n = 16;
    result = is_prime_number(n);
    printf("%d is prime: %d\n", n, result);

    n = 113;
    result = is_prime_number(n);
    printf("%d is prime: %d\n", n, result);

    n = 7919;
    result = is_prime_number(n);
    printf("%d is prime: %d\n", n, result);

    n = 0;
    result = is_prime_number(n);
    printf("%d is prime: %d\n", n, result);

    n = -1;
    result = is_prime_number(n);
    printf("%d is prime: %d\n", n, result);

    return (0);
}

