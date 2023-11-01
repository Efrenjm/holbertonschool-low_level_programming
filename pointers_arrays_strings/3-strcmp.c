#include "main.h"
#include <string.h>
/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, i = 0, diff = 0, lim;

	l1 = strlen(s1);
	l2 = strlen(s2);

	lim = (l1 <= l2) ? l1 : l2;

	while (i <= lim)
	{
		if (s1[i] == s2[i])
		{
			c++;
			continue;
		}
		else
		{
			diff = s1[i] - s2[i];
			break;
		}

		i++;
	}

	return (diff);
}
