#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which times table needs to be printed.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j, result, hundreds, tens, ones;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;
            hundreds = result / 100;
            tens = (result / 10) % 10;
            ones = result % 10;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (result < 10)
            {
                _putchar(' ');
                _putchar(' ');
                _putchar(ones + '0');
            }
            else if (result < 100)
            {
                _putchar(' ');
                _putchar(tens + '0');
                _putchar(ones + '0');
            }
            else
            {
                _putchar(hundreds + '0');
                _putchar(tens + '0');
                _putchar(ones + '0');
            }
        }
        _putchar('\n');
    }
}

