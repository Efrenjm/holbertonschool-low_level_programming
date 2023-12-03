#include <stdio.h>
/*
 * set_bit - set the value to 1 of a bit index
 * @n: address to the int number
 * @index: index of the bit
 * Return: 1 if worked, 0 if not
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return -1;

	*n |= (1UL << index);
	return 1;
}
