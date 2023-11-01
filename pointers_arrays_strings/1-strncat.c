#include "main.h"
#include <stdio.h>

/**
 * *_strncat - concatenate n bytes of a string to another string
 * @dest: first string
 * @src: second n-byte sub-string
 * @n: number of bytes from second string
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;
	int i = 0;

	while (*temp != '\0')
		temp++;
	while (*src != '\0' && i < n)
	{
		*temp = *src;
		temp++;
		i++;
		src++;
	}
	return (dest);
}
