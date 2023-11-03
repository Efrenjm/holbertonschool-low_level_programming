#include "main.h"

/**
 * _memcpy - memcpy function
 * @dest: destino
 * @src: origen
 * @n: variable n
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
