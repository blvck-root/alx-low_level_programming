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
 * init_dog - initialize a variable of type struct dog
 * @d: dog struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	char *namecpy = _strcpy(name);
	char *ownercpy = _strcpy(owner);

	d->name = namecpy;
	d->age = age;
	d->owner = ownercpy;
}
