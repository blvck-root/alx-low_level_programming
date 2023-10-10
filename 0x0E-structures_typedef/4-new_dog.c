#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog struct
 * @name: dog's name
 * @age: number of years the dog has lived
 * @owner: name of dog owner
 * Return: pointer to object of type dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	/* char *n = name, *o = owner; * dog name and owner */

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}
