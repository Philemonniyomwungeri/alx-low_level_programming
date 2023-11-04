#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *custom_strdup(char *str);

int main(void)
{
	char *s;

	s = custom_strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}

