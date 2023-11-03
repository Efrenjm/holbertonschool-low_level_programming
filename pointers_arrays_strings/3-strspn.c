#include "main.h"

/**
 * _strspn - function strspn
 * @s: cadena
 * @accept: accept
 * Return: prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0, x, i = 0;

	while (s[i])
	{
		for (x = 0; accept[x] != '\0'; x++)
		{
			if (s[i] == accept[x])
			{
				count++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (count);
		}
		i++;
	}
	return (count);
}
