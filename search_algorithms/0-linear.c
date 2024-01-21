#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"
/**
 * linear_search - perform linear search algorithm
 * @array: pointer to the first value of an array
 * @size: size of the array
 * @value: value to search in the array
 * Return: index of the first value found in the array or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
