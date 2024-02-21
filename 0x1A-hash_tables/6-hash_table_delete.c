#include "hash_tables.h"

void hash_node_delete(hash_node_t *node);

/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;

	if (ht == NULL)
	{
		free(ht);
		exit(EXIT_SUCCESS);
	}

	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		hash_node_delete(node);
		++i;
	}
	free(ht->array);
	free(ht);
}

/**
 * hash_node_delete - delete hash node
 * @node: hash node
 * Return: void
 */
void hash_node_delete(hash_node_t *node)
{
	if (node == NULL)
	{
		free(node);
	}
	else
	{
		hash_node_delete(node->next);
		free(node->key);
		free(node->value);
		free(node);
		node = NULL;
	}
}
