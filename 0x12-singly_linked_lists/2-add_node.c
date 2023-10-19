#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _strlen(const char *str);

/**
 * add_node - add node to the start of a linkedlist
 * @head: pointer to linkedlist
 * @str: string
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL || str == NULL)
		return (NULL);

	new = (list_t *) malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (new);
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
