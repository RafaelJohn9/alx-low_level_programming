#include "hash_tables.h"

/**
 * hash_table_delete-a function that deletes a hash table.
 * @ht: this is the hashtable
 */
void hash_table_delete(hash_table_t *ht)
{
	int index = 0;
	hash_node_t *temp, *node;

	if (!ht)
	{
		return;
	}

	for (index = 0; (long unsigned int)index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
