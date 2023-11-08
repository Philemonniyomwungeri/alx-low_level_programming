#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/* Function prototype for the print_name function */
void print_name(char *name, void (*f)(char *));

/* Function prototypes for the functions used in 0-main.c */
void print_name_as_is(char *name);
void print_name_uppercase(char *name);

#endif /* FUNCTION_POINTERS_H */

