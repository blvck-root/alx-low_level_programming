#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - add new node at the end of a listint_t
 * @head: points to the head of a linkedlist
 * @n: value of the new element
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *node;

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	node = *head;
	while (node->next)
		node = node->next;
	node->next = new;
	return (new);
}
