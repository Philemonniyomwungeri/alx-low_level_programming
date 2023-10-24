#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0.
 * @n: The number for which times table needs to be printed.
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j, result;

    for (i = 0; i <= n; i++)
    {
        for (j = 0; j <= n; j++)
        {
            result = i * j;
            int hundreds, tens, ones;

            if (j != 0)
            {
                _putchar(',');
                _putchar(' ');
            }

            if (result < 10)
            {
                _putchar(' ');
                _putchar(' ');
                _putchar(result + '0');
            }
            else if (result < 100)
            {
                hundreds = result / 100;
                tens = (result / 10) % 10;
                _putchar(' ');
                _putchar(hundreds + '0');
                _putchar(tens + '0');
                _putchar(result % 10 + '0');
            }
        }
        _putchar('\n');
    }
}

