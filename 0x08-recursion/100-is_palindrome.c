#include "main.h"

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 * Return: Length of the string
 */
int _strlen(char *s);

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome
 * @s: Pointer to the string
 * @start: Start index of the string
 * @end: End index of the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end);

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s);

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the string
 * Return: Length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome
 * @s: Pointer to the string
 * @start: Start index of the string
 * @end: End index of the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: Pointer to the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (length <= 1)
		return (1);

	return (is_palindrome_helper(s, 0, length - 1));
}

