#include "lists.h"

/**
 * sum_listint - sum all of the data in a linkedlist
 * @head: points to the head node
 * Return: sum of all the data in a linkedlist
 */
int sum_listint(listint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_listint(head->next));
}
