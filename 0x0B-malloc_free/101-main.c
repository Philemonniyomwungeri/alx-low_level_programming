#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_tab - Prints an array of strings
 * @tab: The array to print
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; i++)
	{
		printf("%s\n", tab[i]);
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char **tab;
	int i;

	tab = strtow("      ALX School         #cisfun      ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}

	print_tab(tab);

	/* Free allocated memory */
	for (i = 0; tab[i] != NULL; i++)
		free(tab[i]);
	free(tab);

	return (0);
}


