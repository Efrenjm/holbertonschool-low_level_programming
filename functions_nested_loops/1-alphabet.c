#include "main.h"
/**
 * print_alphabet - prints alphabet
 * main - funcion principal
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
