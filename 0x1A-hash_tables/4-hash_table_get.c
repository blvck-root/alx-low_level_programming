#include "hash_tables.h"

/**
 * hash_table_get - get value associated with key
 * @ht: hash table
 * @key: key string
 * Return: value associated with key as string, or NULL if key not found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || key[0] == '\0')
		return (NULL);

	idx = key_index((unsigned char *) key, ht->size);
	node = ht->array[idx];
	if (idx >= ht->size || node == NULL)
		return (NULL); /* key not found, index points to NULL */

	while (node != NULL && strcmp(node->key, key) != 0)
		node = node->next;

	if (node == NULL)
		return (NULL); /* key not found, collides with existing keys */
	return (node->value);
}
