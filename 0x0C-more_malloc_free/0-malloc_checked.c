#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Size of the memory block to be allocated.
 *
 * Return: A pointer to the allocated memory.
 *         If malloc fails, the malloc_checked function should cause
 *         normal process termination with a status value of 98.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

