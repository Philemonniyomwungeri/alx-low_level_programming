#include "main.h"

/**
 * print_fibonacci_sum - Prints the sum of even-valued Fibonacci terms
 * whose values do not exceed 4,000,000.
 * @limit: The upper limit for Fibonacci terms.
 */
void print_fibonacci_sum(int limit)
{
    long int prev = 1, curr = 2, next, sum = 2;

    while (curr <= limit)
    {
        next = prev + curr;
        if (next % 2 == 0)
        {
            sum += next;
        }
        prev = curr;
        curr = next;
    }

    printf("%ld\n", sum);
}

