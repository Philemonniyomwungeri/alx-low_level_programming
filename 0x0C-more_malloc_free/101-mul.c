#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to be checked
 * Return: 1 if the character is a digit, 0 otherwise
 */
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - Computes the length of a string
 * @s: The input string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 * Return: 0 on success, 98 on incorrect number of arguments, 98 on invalid input
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2, carry, mul, sum;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	result = malloc(sizeof(int) * (len1 + len2));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			mul = (argv[1][i] - '0') * (argv[2][j] - '0');
			sum = mul + result[i + j + 1] + carry;
			result[i + j + 1] = sum % 10;
			carry = sum / 10;
		}
		result[i + j + 1] = carry;
	}

	for (i = 0; i < len1 + len2; i++)
	{
		if (i == 0 && result[i] == 0)
			continue;
		printf("%d", result[i]);
	}
	printf("\n");

	free(result);
	return (0);
}

