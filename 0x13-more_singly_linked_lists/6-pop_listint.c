#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - delete the head node of a listint_t list
 * @head: points to the head node
 * Return: the head node's data
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *node = *head;

	if (head == NULL || node == NULL)
		return (0);

	*head = node->next;
	n = node->n;
	node->next = NULL;
	free(node);
	return (n);
}
