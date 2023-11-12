#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc - mimics calloc function
 * @nmemb: number of elements
 * @size: bytes per element
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *alloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	alloc = malloc(nmemb * size);

	if (alloc != NULL)
		memset(alloc, 0, nmemb * size);

	return (alloc);
}
