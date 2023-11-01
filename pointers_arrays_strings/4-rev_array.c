#include "main.h"

/**
 * reverse_array - reverse an array
 * @a: array of integers
 * @n: array lenght
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end;
	int i = 0;

	end = a + n - 1;
	while (start < end)
	{
		i = *end;
		*end = *start;
		*start = i;
		start++;
		end--;
	}
}
