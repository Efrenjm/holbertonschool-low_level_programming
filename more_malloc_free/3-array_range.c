#include "main.h"
#include <stdlib.h>
/**
 * array_range - create an array of integers
 * @min: lower limit value
 * @max: upper limit value
 *
 * Return: Pointer to array
 */
int *array_range(int min, int max)
{
	int *result, i;

	if (min > max)
		return (NULL);

	result = malloc((max - min + 1) * sizeof(int));

	if (result != NULL)
	{
		for (i = 0; min <= max; i++, min++)
			result[i] = min;
	}

	return (result);
}
