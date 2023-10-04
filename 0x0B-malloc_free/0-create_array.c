#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars initialized with a specific char
 * @size: size of the array to be initialized
 * @c: char to be used as initializer
 * Return: array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	i = 0;
	s = malloc(size * sizeof(c));

	if (size == 0 || s == NULL)
		return (NULL);

	while (i < size)
		s[i++] = c;

	return (s);
}
