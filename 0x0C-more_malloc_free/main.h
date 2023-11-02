#ifndef MAIN_H
#define MAIN_H

/**
 * multiply - Multiplies two large numbers represented as strings.
 * @num1: The first number as a string.
 * @num2: The second number as a string.
 *
 * Return: A pointer to the resulting product as a string.
 */
char *multiply(char *num1, char *num2);

/**
 * _isdigit - Checks if a string consists of only digits.
 * @str: The string to check.
 *
 * Return: 1 if the string consists of only digits, 0 otherwise.
 */
int _isdigit(char *str);

/**
 * _strlen - Computes the length of a string.
 * @str: The string to measure.
 *
 * Return: The length of the string.
 */
int _strlen(char *str);

#endif /* MAIN_H */

