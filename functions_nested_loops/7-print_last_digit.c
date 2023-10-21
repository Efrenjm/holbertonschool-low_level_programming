#include "main.h"
/**
 * print_last_digit - show last number
 * @i: variable to function
 * main - code
 * Return: i
 */
int print_last_digit(int i)
{
	i %= 10;
	if (i < 0)
		i *= -1;
	_putchar(i + 48)

	return (i);
}
