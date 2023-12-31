#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - function print name
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 * Return: NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; ++i)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
