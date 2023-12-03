#include <stdio.h>
/**
 * get_bit - get bit at an index
 * @n: number
 * @index: index of bit
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
