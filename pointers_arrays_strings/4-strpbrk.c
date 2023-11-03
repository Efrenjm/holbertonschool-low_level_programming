#include "main.h"

/**
 * _strpbrk - function
 * @s: variable pointer
 * @accept: variable a search
 * Return: search
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, x = 0;

	while (s[i] != '\0')
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
				return (s + i);
		}
		i++;
	}
	return (0);
}
