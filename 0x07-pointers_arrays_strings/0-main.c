#include "main.h"
#include <stdio.h>

int main(void)
{
    char buffer[10]; /* Example buffer to test _memset function */
    int i;

    for (i = 0; i < 10; i++)
        buffer[i] = 0; /* Initialize buffer with zeros */

    printf("Original buffer: ");
    for (i = 0; i < 10; i++)
        printf("%d ", buffer[i]); /* Print original buffer */
    printf("\n");

    _memset(buffer, 1, 5); /* Call _memset to fill first 5 bytes with 1 */

    printf("Modified buffer: ");
    for (i = 0; i < 10; i++)
        printf("%d ", buffer[i]); /* Print modified buffer */
    printf("\n");

    return (0);
}

