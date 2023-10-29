#include "main.h"
/**
 * string_rev - reverse a string
 * @s: string to be reversed
 */
void rev_string(char *s)
{
	int i = 0, start;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	for (start = i - 1; start >= i / 2; start--)
	{
		tmp = s[start];
		s[start] = s[i - start - 1];
		s[i - start - 1] = tmp;
	}

}
