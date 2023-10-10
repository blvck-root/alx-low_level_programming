#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print dog struct
 * @d: pointer to dog struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name == NULL ? "(nil)" : d->name));
		printf("Age: %f\n", (d->age <= 0 ? 0 : d->age));
		printf("Owner: %s\n", (d->owner == NULL ? "(nil)" : d->owner));
	}
}
