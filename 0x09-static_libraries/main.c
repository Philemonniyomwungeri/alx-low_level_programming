// main.c
#include <stdio.h>
#include "my_string_functions.h"

int main(void) {
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    char result[100];

    _strcat(result, str1);
    _strcat(result, str2);

    printf("Concatenated string: %s\n", result);

    return 0;
}

