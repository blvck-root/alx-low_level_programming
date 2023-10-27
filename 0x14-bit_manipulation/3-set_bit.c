#include "main.h"
#include <stdio.h>
/**
 * set_bit - set the value of a bit at a given index
 * @n: pointer to unsigned integer
 * @index: index of the bit you want to get
 * Return: 1 if successful else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	*n |= 1UL << index;
	return (1);
}
