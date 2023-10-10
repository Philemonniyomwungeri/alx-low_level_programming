#include<stdio.h>

/**
 * main - A program that prints the size of various computer types
 *This program prints the size of various computer types
 * (char, int, long int, long long int, float) on the computer it is 
 * compiled and run on. It demonstrates the usage of the sizeof operator 
 * to determine the size of different data types in bytes.
 * Return 0 (Success)
 */
int main(void)
{
char a;
int b;
long int c;
lon long int d;
float f;

printf("Size of a char: %lu byte(s)\n", (unisigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long sizeof(f));
return (0);
}
