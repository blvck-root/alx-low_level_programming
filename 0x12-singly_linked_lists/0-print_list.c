#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements of a list of type list_t
 * @h: linkedlist
 * Return: number of nodes in linkedlist
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		++i;
	}
	return (i);
}
