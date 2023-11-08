#include "function_pointers.h"
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a given function
 * @name: name to be printed
 * @f: pointer to a function that prints a name
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name); /* Call the function pointed by the function pointer with the name parameter */
	}
}

