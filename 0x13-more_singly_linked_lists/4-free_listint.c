#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free memory allocated for a list of type listint_t
 * @head: points to the first node
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
