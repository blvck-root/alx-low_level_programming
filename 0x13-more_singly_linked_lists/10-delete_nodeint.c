#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - delete node at a given position
 * @head: points to the head node
 * @index: index where the node should be inserted
 * Return: 1 if deletion is successful, else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *node, *tmp;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	if (index == 0)
	{
		*head = node->next;
		node->next = NULL;
		free(node);
		node = NULL;
		return (1);
	}

	while (node)
	{
		if (++i == index)
		{
			tmp = node->next;
			node->next = tmp->next;
			tmp->next = NULL;
			free(tmp);
			tmp = NULL;
			return (1);
		}
		node = node->next;
	}
	return (-1);
}
