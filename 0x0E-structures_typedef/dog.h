#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representing a dog
 * @name: Pointer to the name of the dog
 * @age: Age of the dog
 * @owner: Pointer to the owner of the dog
 *
 * Description: This structure represents a dog with its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;
/* Function prototype for init_dog */
void init_dog(struct dog *d, char *name, float age, char *owner);
/**
 * print_dog - Prints the information of a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the name, age, and owner of a struct dog.
 * If any element of the struct is NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d);
/* Function prototype for creating a new dog */
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
