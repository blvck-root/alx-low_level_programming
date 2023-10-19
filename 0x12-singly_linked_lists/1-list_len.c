#include "lists.h"
#include <stdio.h>

/**
 * list_len - find the number of elements in a linkedlist
 * @h: linkedlist
 * Return: number of elements in linkedlist
 */
size_t list_len(const list_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		++i;
	}
	return (i);
}
