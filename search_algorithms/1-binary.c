#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - perform binary search algorithm
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search
 * Return: index of the first found element or -1 if can't be found
 */
int binary_search(int *array, size_t size, int value)
{
	int L = 0;
	int R = size - 1;
	int m, i;

	while (L <= R)
	{
		printf("Searching in array: ");
		for (i = L; i <= R; i++)
		{
			if (i < R)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		putchar(10);
		m = (int)(L + R) / 2;

		if (array[m] < value)
			L = m + 1;
		else if (array[m] > value)
			R = m - 1;
		else
			return (m);
	}
	return (-1);
}
