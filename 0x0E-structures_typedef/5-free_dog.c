#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees memory allocated for dog struct
 * @d: pointer to dog struct
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d);
}
