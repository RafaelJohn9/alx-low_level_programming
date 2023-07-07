#include "hash_tables.h"

/**
 * hash_table_print-a function that prints a hash table.
 * @ht:is the hash_table
 * Return: NONE
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int i = 0, is_first_node = 1;

	if (!ht)
	{
		return;
	}
	printf("{");
	for (i = 0; (unsigned long int)i < ht->size; i++)
	{
		node = ht->array[i];

		while (node)
		{
			if (!is_first_node)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			is_first_node = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
