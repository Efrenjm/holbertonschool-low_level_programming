#include "main.h"

/**
 * leet - cambio de character
 * @s: string to capital
 * Return: capitalized words
 */

char *leet(char *s)
{
	int i = 0, j;
	char leet[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char code[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	while (s[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = code[j];
			}
		}
		i++;
	}

	return (s);
}
