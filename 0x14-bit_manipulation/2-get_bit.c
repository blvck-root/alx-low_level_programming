#include "main.h"

/**
 * get_bit - get the value of a bit at a given index
 * @n: unsigned integer
 * @index: index of the bit you want to get
 * Return: value of the bit at specified index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i, bit, bits = sizeof(unsigned long int) * 8;

	for (i = --bits; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		if (i == (int) index)
			return (bit ? 1 : 0);
	}
	return (-1);
}
