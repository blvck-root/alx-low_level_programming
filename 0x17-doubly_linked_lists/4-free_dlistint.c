#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free a doubly linked list
 * @head: head node of a dooubly linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head)
	{
		while (head->next)
		{
			tmp = head;
			head = head->next;
			head->prev = NULL;
			tmp->next = NULL;
			free(tmp);
			tmp = NULL;
		}
	}
	free(head);
	head = NULL;
}
