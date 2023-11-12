#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: bytes to allocate
 * Return: Pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *allocated_memory = malloc(b);

	if (allocated_memory == NULL)
		exit(98);

	return (allocated_memory);
}
