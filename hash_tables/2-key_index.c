#include "hash_tables.h"
/**
 * key_index - get the key index
 * @key: key
 * @size: size of the array
 * Return: hash value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	
	hash_value = hash_djb2(key);

	return (hash_value % size);
}
