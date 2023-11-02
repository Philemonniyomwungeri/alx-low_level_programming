#include "main.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    multiply(argv[1], argv[2]);
    return (0);
}

