#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_set - add an element to the hash table
 * @ht: hash table
 * @key: key string
 * @value: value associated with the key
 * Return: 1 if successful else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int idx;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (0);

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	idx = key_index((unsigned char *) key, ht->size);
	if (ht->array[idx] == NULL)
	{
		new->next = NULL;
		ht->array[idx] = new;
	}
	else
	{
		new->next = ht->array[idx];
		ht->array[idx] = new;
	}
	return (1);
}
