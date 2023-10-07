#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the previously allocated memory
 * @old_size: size in bytes of space allocated for ptr
 * @new_size: size in bytes of the new memory block
 * Return: pointer to the newly allocated space
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, size;
	char *p;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p ==  NULL)
			return (NULL);
		return ((void *) p);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	size = old_size < new_size ? old_size : new_size;
	for (i = 0; i < size; i++)
		p[i] = ((char *) ptr)[i];
	free(ptr);
	return ((void *) p);
}
