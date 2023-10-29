#include "main.h"

/**
 * _atoi - funcion atoi
 * @s: variable
 * Return: numero entero
 */

int _atoi(char *s)
{
	int i = 0, num = 0, numcount = 0, mult = 1, x = 0, neg = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			numcount++;
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
		}
		i++;
	}
	for (; numcount > 1; numcount--)
		mult *= 10;
	for (; x <= i; x++)
	{
		if (s[x] == '-')
			neg *= -1;
		else if (s[x] >= '0' && s[x] <= '9')
		{
			num += (s[x] - '0') * mult * neg;
			mult /= 10;
		}
	}
	return (num);
}
