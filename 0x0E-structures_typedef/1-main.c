#include <stdio.h>
#include "dog.h"

/**
 * main - Entry point of the program
 *
 * Description: This function serves as the entry point of the program.
 * It initializes a struct dog, prints its information, and returns 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");

    /* Print dog information */
    printf("Dog's name: %s\n", my_dog.name);
    printf("Dog's age: %.1f\n", my_dog.age);
    printf("Dog's owner: %s\n", my_dog.owner);

    return (0);
}

