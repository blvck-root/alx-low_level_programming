#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete nth node of a doubly linked list
 * @head: pointer to a doubly linked list
 * @index: position of a node
 * Return: 1 if successful else -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		if (node->next)
		{
			(*head)->prev = NULL;
			node->next = NULL;
		}
		free(node);
		return (1);
	}

	while (node)
	{
		if (index == 0)
		{
			tmp = node->prev;
			tmp->next = node->next;
			if (node->next)
			{
				tmp->next->prev = tmp;
				node->next = NULL;
			}
			node->prev = NULL;
			free(node);
			return (1);
		}
		node = node->next;
		--index;
	}
	return (-1);
}
