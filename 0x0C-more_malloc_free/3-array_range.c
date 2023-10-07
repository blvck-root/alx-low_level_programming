#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers in a given range
 * @min: starting number
 * @max: ending number
 * Return: pointer to array
 */
int *array_range(int min, int max)
{
	int *p, i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	p = malloc(len * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = min + i;
	return (p);
}
