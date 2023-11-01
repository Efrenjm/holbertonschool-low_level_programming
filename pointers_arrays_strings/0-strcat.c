#include "main.h"
#include <stdio.h>

/**
 * *_strcat - concatenate two strings
 * @dest: first string
 * @src: second string
 * Return: dest.
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while(*temp != '\0')
		temp++;
	while(*src != '\0')
	{
		*temp = *src;
		temp++;
	}
	*temp = *src;
	return (dest);
}
