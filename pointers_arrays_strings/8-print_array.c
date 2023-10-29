#include "main.h"
#include <stdio.h>
/**
 * print_array - prints array
 * @a: variable a
 * @n: variable n - length
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%i, ", a[i]);
		else
			printf("%i", a[i]);
	}
	printf("\n");
}
