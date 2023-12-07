#include "lists.h"

/**
 * dlistint_len - find the length of a doubly linked list
 * @h: pointer to doubly linked list
 * Return: number of elements in a doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		++nodes;
	}
	return (nodes);
}
