#include "main.h"

/**
 * clear_bit - set bit at given index to 0
 * @n: pointer to integer
 * @index: index at which to set bit to 0
 * Return: 1 if successful else -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}
