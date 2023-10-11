#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - copies string including '\0'
 * @src: string
 * Return: pointer to dest
 */
char *_strcpy(char *src)
{
	int i, len = 0;
	char *dest;

	while (src[len] != '\0')
		++len;

	dest = malloc(len * sizeof(char));
	if (dest == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dest[i] = src[i];
	return (dest);
}

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

	d->name = _strcpy(name);
	d->age = age;
	d->owner = _strcpy(owner);
	return (d);
}
