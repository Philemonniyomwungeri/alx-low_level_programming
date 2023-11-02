#include <stdio.h>
#include <stdlib.h>

int	_isdigit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

int	_strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

void	multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result = calloc(len1 + len2, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int mul = (num1[i] - '0') * (num2[j] - '0');
			int sum = mul + result[i + j + 1];
			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	int non_zero_found = 0;
	for (int i = 0; i < len1 + len2; i++)
	{
		if (result[i] != 0 || non_zero_found)
		{
			non_zero_found = 1;
			printf("%d", result[i]);
		}
	}

	if (!non_zero_found)
	{
		printf("0");
	}
	printf("\n");

	free(result);
}

int	main(int argc, char *argv[])
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	multiply(argv[1], argv[2]);
	return (0);
}

