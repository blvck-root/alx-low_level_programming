#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add node at the beginning of a doubly linked list
 * @head: pointer to the head of a doubly linked list
 * @n: integer
 * Return: address of the new element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;
	return (new);
}
