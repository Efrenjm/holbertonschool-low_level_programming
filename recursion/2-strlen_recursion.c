#include "main.h"

/**
 * _strlen_recursion - writes a string with recursion
 * @s: string
 * Return: always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
