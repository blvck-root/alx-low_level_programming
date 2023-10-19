#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _strlen(const char *str);

/**
 * add_node_end - add node to the end of a linkedlist
 * @head: pointer to linkedlist
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *node;

	if (str == NULL)
		return (NULL);

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	node = *head;
	while (node->next)
		node = node->next;
	node->next = new;
	return (node);
}

/**
 * _strlen - find the length of a string
 * @str: string
 * Return: number of characters in a string
 */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i] != '\0')
		++i;
	return (i);
}
