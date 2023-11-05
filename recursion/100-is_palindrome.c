#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * is_palindrome_recursive - recursive palindrome function
 * @s: number to be tested
 * @start: start position
 * @end: ending position
 * Return: 1 if palindrome, 0 if not palindrome
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to verify
 * Return: 1 if it is palindrome or 0 if it is not.
 */
int is_palindrome(char *s)
{
	int length;

	length = strlen(s);
	if (length <= 1)
		return (1);
	return (is_palindrome_recursive(s, 0, length - 1));
}
