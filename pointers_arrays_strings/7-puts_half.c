#include "main.h"
/**
 * puts_half - function half
 * @str: variable
 */

void puts_half(char *str)
{
	int i = 0, mitad;

	while (str[i] != '\0')
		i++;
	mitad = i / 2;

	if (i % 2 != 0)
		mitad = ((i - 1) / 2) + 1;

	for (; mitad < i; mitad++)
		_putchar(str[mitad]);
	_putchar('\n');
}
