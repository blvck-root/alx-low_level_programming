#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - print all elements of a doubly linked list
 * @h: pointer to a doubly linked list
 * Return: number of nodes in a doubly linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		++nodes;
	}
	return (nodes);
}
