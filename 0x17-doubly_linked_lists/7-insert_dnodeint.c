#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at position index
 * @h: pointer to a doubly linked list
 * @idx: position of a node
 * @n: integer
 * Return: new node if successful else NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *tmp, *new;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	node = *h;
	while (node)
	{
		if (idx == 0)
		{
			tmp = node->prev;
			node->prev = NULL;
			tmp->next = NULL;
			new = add_dnodeint_end(&node, n);
			new->next = node;
			node->prev = new;
			return (new);
		}
		node = node->next;
		--idx;
	}
	return (NULL);
}
