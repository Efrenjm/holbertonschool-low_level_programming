#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - returns a pointer to a copy of the string provided
 * @str: string to be copied
 * Return: pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *duplicate;

	if (str == NULL)
		return (NULL);

	duplicate = malloc(strlen(str) + 1);

	if (duplicate != NULL)
		strcpy(duplicate, str);

	return (duplicate);
}
