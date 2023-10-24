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
	listint_t *new, *node;

	if (head == NULL)
		return (NULL);

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	node = *head;
	while (node)
	{
		if (++i == idx)
		{
			new->next = node->next;
			node->next = new;
			return (new);
		}
		node = node->next;
	}
	free(new);
	return (NULL);
}
