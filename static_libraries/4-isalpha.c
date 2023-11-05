#include "main.h"
/**
 * _isalpha - checks if it's alphabet
 * @c: variable c
 * main - principal
 * Return: 0
 */
int _isalpha(int c)
{
	int i;

	i = ((c >= 97 && c <= 122) || (c >= 65 && c <= 90)) ? 1 : 0;
	return (i);
}
