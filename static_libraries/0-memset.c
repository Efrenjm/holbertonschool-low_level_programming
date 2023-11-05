#include "main.h"

/**
 * _memset - function memset
 * @s: pointer
 * @b: new valor a memoria
 * @n: number limit
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
