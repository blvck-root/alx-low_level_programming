#include "lists.h"
#include <stdio.h>

/**
 * listint_len - print all the elements of a listint_t list
 * @h: points to the first node
 * Return: number of nodes in a linkedlist
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		++i;
	}
	return (i);
}
