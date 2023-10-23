#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - add new node at the beginning of a listint_t
 * @head: points to the head of a linkedlist
 * @n: value of the new element
 * Return: address of the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
