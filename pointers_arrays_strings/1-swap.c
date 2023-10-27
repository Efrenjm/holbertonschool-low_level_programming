#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the values of two integers
 * @a: first int
 * @b; second int 
 * Return: Always 0.
 */
int swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
