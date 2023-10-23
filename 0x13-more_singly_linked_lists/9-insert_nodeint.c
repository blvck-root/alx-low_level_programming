#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: points to the head node
 * @idx: index where the node should be inserted
 * @n: integer
 * Return: address of the new node or NULL if insertion fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new, *node, *tmp;

	if (head == NULL)
		return (NULL);

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	node = *head;
	while (node && i++ <= idx)
	{
		if (i == idx)
		{
			tmp = node->next;
			node->next = new;
			new->n = n;
			new->next = tmp;

			return (new);
		}
		node = node->next;
	}

	return (NULL);
}
