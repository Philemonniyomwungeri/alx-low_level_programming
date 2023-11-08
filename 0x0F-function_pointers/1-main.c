#include <stdio.h>
#include "function_pointers.h"

/**
 * print_elem - prints an integer
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem(int elem)
{
    printf("%d\n", elem);
}

/**
 * print_elem_hex - prints an integer, in hexadecimal
 * @elem: the integer to print
 *
 * Return: Nothing.
 */
void print_elem_hex(int elem)
{
    printf("0x%x\n", elem);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5] = {0, 98, 402, 1024, 4096};
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Printing elements using print_elem:\n");
    array_iterator(array, size, &print_elem);

    printf("\nPrinting elements in hexadecimal using print_elem_hex:\n");
    array_iterator(array, size, &print_elem_hex);

    return (0);
}

