#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0.
 */
int main(void)
{
	dog_t *my_dog;

	my_dog = new_dog("Poppy", 3.5, "Bob");
	if (my_dog == NULL)
	{
		printf("Failed to create new dog\n");
		return (1);
	}

	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog->name, my_dog->age);

	/* Don't forget to free the allocated memory for the dog */
	free(my_dog->name);
	free(my_dog->owner);
	free(my_dog);

	return (0);
}

