#include "main.h"

/**
 * flip_bits - find how many bits you need to flip to get a number
 * @n: unsigned int to flip
 * @m: unsigned int to match
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res = n ^ m;
	unsigned int count = 0;

	while (res > 0)
	{
		count += res & 1; /* check least significant bit */
		res >>= 1; /* check next bit */
	}
	return (count);
}
