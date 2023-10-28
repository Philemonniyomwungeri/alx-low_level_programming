#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
    char str1[100] = "Hello, ";
    char str2[] = "world!";
    char result[100];

    /* Example usage of _strcat function */
    _strcat(result, str1);
    _strcat(result, str2);

    /* Print the concatenated string */
    printf("Concatenated string: %s\n", result);

    /* Example usage of other functions (if needed) */
    /* ... */

    return (0);
}

