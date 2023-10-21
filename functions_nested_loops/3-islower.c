#include "main.h"
/**
 * _islower - checks if it's lowercase
 * @c: parameter c
 * main - funcion principal
 * Return: 0
 */
int _islower(int c)
{
	int i;

	i = (c >= 97 && c <= 122) ? 1 : 0;
	return (i);
}
