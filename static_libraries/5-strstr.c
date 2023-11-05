#include "main.h"

/**
 * _strstr - function
 * @haystack: variable
 * @needle: variable
 * Return: locate
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, x = 0;

	while (haystack[i])
	{
		while (needle[x])
		{
			if (haystack[i + x] != needle[x])
			{
				break;
			}
			x++;
		}
		if (needle[x] == '\0')
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
