#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts binary number to an unsigned int
 * @b: string of bits
 * Return: converted number, 0 if fails
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num;

	if (b == NULL || (b[0] != '0' && b[0] != '1'))
		return (0);

	num = b[0] - 48;
	for (i = 1; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		num = num * 2 + (b[i] - 48);
	}

	return (num);
}
