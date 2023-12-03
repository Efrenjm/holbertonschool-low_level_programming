#include <stdio.h>
/**
 * flip_bits - calculates the number of flips to get the same number
 * @n: first number
 * @m: second number
 * Return: count of flips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count;

	xor_result = n ^ m;
	count = 0;
	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
