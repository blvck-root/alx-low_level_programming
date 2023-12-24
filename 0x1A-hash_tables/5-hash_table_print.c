#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - print hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, nprint = 0;
	hash_node_t *node;

	if (ht == NULL)
		exit(EXIT_SUCCESS);

	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];

		if (i == 0)
			printf("{");

		while (node != NULL)
		{
			if (nprint > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			++nprint;
		}

		if (i == ht->size - 1)
			printf("}\n");
		++i;
	}
}
