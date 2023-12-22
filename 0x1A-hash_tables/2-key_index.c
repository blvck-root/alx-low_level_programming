#include "hash_tables.h"

/**
 * key_index - get the index of a key using the djb2 algorithm
 * @key: string
 * @size: size of the array
 * Return: integer position of key in array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
