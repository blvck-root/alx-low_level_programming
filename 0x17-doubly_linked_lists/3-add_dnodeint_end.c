#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add node at the end of a doubly linked list
 * @head: pointer to the head of a doubly linked list
 * @n: integer
 * Return: a pointer to the new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *node;

	if (head == NULL)
		return (NULL);

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}

	node = *head;
	while (node->next)
		node = node->next;
	new->prev = node;
	node->next = new;
	return (new);
}
