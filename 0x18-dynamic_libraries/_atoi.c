#include "main.h"

int _atoi(char *s)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i = 1;
    }

    for (; s[i] != '\0'; ++i)
    {
        result = result * 10 + (s[i] - '0');
    }

    return sign * result;
}

