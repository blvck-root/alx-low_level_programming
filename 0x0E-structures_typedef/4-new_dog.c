#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - computes the length of a string
 * @str: string
 * Return: number of characters in a string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len++] != '\0')
		;
	return (len);
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
	int i, namelen, ownerlen;

	namelen = _strlen(name);
	ownerlen = _strlen(owner);

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = malloc(namelen * sizeof(d->name));
	if (d == NULL)
		return (NULL);
	for (i = 0; i < namelen; i++)
		d->name[i] = name[i];

	d->age = age;

	d->owner = malloc(ownerlen * sizeof(d->owner));
	if (d == NULL)
		return (NULL);
	for (i = 0; i < ownerlen; i++)
		d->owner[i] = owner[i];
	return (d);
}
