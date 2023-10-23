#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free memory allocated for a list of type listint_t
 * @head: points to the first node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *tmp;

	node = *head;
	head = NULL;

	while (node)
	{
		tmp = node;
		node = node->next;
		tmp->next = NULL;
		free(tmp);
	}
}
