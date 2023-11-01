#include "main.h"
#include <stdio.h>

/**
 * *_strncpy - copies a string
 * @dest: first string
 * @src: second n-byte sub-string
 * @n: number of bytes from second string
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (n!=0 && *src != '\0')
	{
		*temp = *src;
		temp++;
		n--;
		src++;
	}

	return (dest);
}
