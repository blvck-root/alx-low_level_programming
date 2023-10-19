#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * free_list - free memory alllocated for a linkedlist
 * @head: head linkedlist
 * Return: void
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}

}
