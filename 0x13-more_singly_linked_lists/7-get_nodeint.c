#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - get the nth node in a linkedlist
 * @head: points to the head node
 * @index: index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head && i <= index)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);
}
