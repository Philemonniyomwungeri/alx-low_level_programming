#include "dog.h"

/**
 * main - Entry point of the program
 *
 * Description: This function serves as the entry point of the program.
 * It initializes a struct dog, calls the print_dog function, and returns 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    struct dog my_dog;

    my_dog.name = "Poppy";
    my_dog.age = 3.5;
    my_dog.owner = "Bob";

    print_dog(&my_dog);

    return (0);
}

