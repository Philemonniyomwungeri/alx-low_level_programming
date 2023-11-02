#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * multiply - Multiplies two large numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: A pointer to the resulting product as a string, or NULL on failure.
 */
char *multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int len_result = len1 + len2;
	int i, j, product, carry = 0;
	char *result;

	if (!_isdigit(num1) || !_isdigit(num2))
		return (NULL);

	result = malloc(sizeof(char) * (len_result + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len_result; i++)
		result[i] = '0';
	result[len_result] = '\0';

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			product = (num1[i] - '0') * (num2[j] - '0') + (result[i + j + 1] - '0') + carry;
			carry = product / 10;
			result[i + j + 1] = (product % 10) + '0';
		}
		result[i + j + 1] = carry + '0';
	}

	return (result);
}

/**
 * _isdigit - Checks if a string consists of only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string consists of only digits, 0 otherwise.
 */
int _isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * _strlen - Computes the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

