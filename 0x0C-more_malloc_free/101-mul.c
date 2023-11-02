#include <stdio.h>
#include <stdlib.h>

/**
 * multiply - Multiplies two positive numbers represented as strings
 * @num1: First number as string
 * @num2: Second number as string
 * Return: Pointer to the result of multiplication as a string
 */
char *multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j, carry = 0;
    char *result;

    while (num1[len1] != '\0')
        len1++;
    while (num2[len2] != '\0')
        len2++;

    result = malloc(sizeof(char) * (len1 + len2 + 1));
    if (result == NULL)
    {
        fprintf(stderr, "Error: Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }

    for (i = 0; i < len1 + len2; i++)
        result[i] = '0';
    result[i] = '\0';

    for (i = len1 - 1; i >= 0; i--)
    {
        int n1 = num1[i] - '0';
        carry = 0;

        for (j = len2 - 1; j >= 0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = (n1 * n2) + (result[i + j + 1] - '0') + carry;
            carry = sum / 10;
            result[i + j + 1] = (sum % 10) + '0';
        }

        result[i + j + 1] += carry;
    }

    int start = 0;
    while (result[start] == '0')
        start++;

    for (i = 0; i < len1 + len2 - start + 1; i++)
        result[i] = result[i + start];
    result[i] = '\0';

    return result;
}

/**
 * main - Entry point
 * @argc: Number of command-line arguments
 * @argv: Array containing the command-line arguments
 * Return: 0 if successful, 1 if incorrect number of arguments, 98 if invalid input
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        fprintf(stderr, "Error: Incorrect number of arguments\n");
        return (EXIT_FAILURE);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i] != '\0'; i++)
    {
        if (num1[i] < '0' || num1[i] > '9')
        {
            fprintf(stderr, "Error: Invalid input, num1\n");
            return (EXIT_FAILURE);
        }
    }

    for (int i = 0; num2[i] != '\0'; i++)
    {
        if (num2[i] < '0' || num2[i] > '9')
        {
            fprintf(stderr, "Error: Invalid input, num2\n");
            return (EXIT_FAILURE);
        }
    }

    char *result = multiply(num1, num2);
    printf("%s\n", result);
    free(result);

    return (EXIT_SUCCESS);
}

