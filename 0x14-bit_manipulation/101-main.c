#include <stdio.h>
#include "main.h"

/**
 * password - Function to get the password.
 *
 * Return: The password.
 */
unsigned long int password(void)
{
	return 101; // Replace with your actual password
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int password_value;

	password_value = password();  // Call the password function to get the password

	FILE *file = fopen("101-password", "w");  // Open the file for writing
	if (file == NULL)
	{
		fprintf(stderr, "Error opening file.\n");
		return (1);
	}

	fprintf(file, "%lu", password_value);  // Write the password to the file
	fclose(file);  // Close the file

	return (0);
}

