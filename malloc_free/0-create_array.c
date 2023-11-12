#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of chars of size "size"
 * @size: size of the array
 * @c: char to initialize
 * Return: s
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			array[i] = c;
	}

	return (array);
}
