#include "lists.h"

/**
 * get_dnodeint_at_index - get the nth node of a doubly linked list
 * @head: pointer to a doubly linked list
 * @index: position of a node
 * Return: node at nth position where n is index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	while (head)
	{
		if (index == 0)
			return (head);
		head = head->next;
		--index;
	}
	return (NULL);
}
