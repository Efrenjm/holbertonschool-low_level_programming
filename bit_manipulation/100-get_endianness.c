#include <stdio.h>
/**
 * get_endianness - get endianess of the system
 * Return: 0 if little endian, 1 if big endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	return ((*byte_ptr == 1) ? 1 : 0);
}
