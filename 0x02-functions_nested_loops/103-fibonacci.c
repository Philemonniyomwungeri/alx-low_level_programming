#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int prev = 1, curr = 2, next, sum = 2;

    while (curr <= 4000000)
    {
        next = prev + curr;
        if (next % 2 == 0)
        {
            sum += next;
        }
        prev = curr;
        curr = next;
    }

    printf("%d\n", sum);

    return (0);
}

