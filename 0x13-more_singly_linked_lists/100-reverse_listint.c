#include "lists.h"

/**
 * reverse_listint - reverses a linkedlist
 * @head: points to the head node
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = NULL, *prev = NULL;

	if (head == NULL)
		return (NULL);

	while (*head)
	{
		curr = *head;
		*head = curr->next;
		curr->next = prev;
		prev = curr;
	}
	*head = curr;
	return (curr);
}
