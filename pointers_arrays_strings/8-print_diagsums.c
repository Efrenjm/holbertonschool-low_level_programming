#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - funtion
 * @a: variable a
 * @size: variable size
 */

void print_diagsums(int *a, int size)
{
	int i, diagsum1 = 0, diagsum2 = 0;

	for (i = 0; i < size; i++)
	{
		diagsum1 += a[(size + 1) * i];
		diagsum2 += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}
