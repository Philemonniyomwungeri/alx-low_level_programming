#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int prev = 1, curr = 2, next, count;

    printf("%d, %d", prev, curr);

    for (count = 3; count <= 50; count++)
    {
        next = prev + curr;
        printf(", %d", next);
        prev = curr;
        curr = next;
    }

    printf("\n");

    return (0);
}

