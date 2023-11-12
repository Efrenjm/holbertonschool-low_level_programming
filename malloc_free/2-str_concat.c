#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the generated string
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";


	concat = malloc(strlen(s1) + strlen(s2) + 1);

	if (concat != NULL)
	{
		strcpy(concat, s1);
		strcat(concat, s2);
	}

	return (concat);
}
