#include "lists.h"

/**
 * sum_dlistint - calculate the sum of a doubly linked list
 * @head: pointer to a doubly linked list
 * Return: sum of a doubly linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
