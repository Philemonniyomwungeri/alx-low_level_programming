#include "main.h"
#include <stdio.h> /* Include the standard I/O header file */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 11;
	int result;

	result = is_prime_number(n);
	if (result == 1)
		printf("%d is a prime number\n", n);
	else
		printf("%d is not a prime number\n", n);

	return (0);
}

