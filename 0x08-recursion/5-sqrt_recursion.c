#include "main.h"

/**
 * find_sqrt - Recursively finds the natural square root of a number.
 * @n: The input number.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int find_sqrt(int n, int guess);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The input number.
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 1));
}

/**
 * find_sqrt - Recursively finds the natural square root of a number.
 * @n: The input number.
 * @guess: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int find_sqrt(int n, int guess)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (find_sqrt(n, guess + 1));
}

