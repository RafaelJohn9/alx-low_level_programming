#include "hash_tables.h"

/**
 * hash_table__get- a function that retrieves a value associated with a key
 * @ht:is the hash_table
 * @key: the key associated with it
 * Return: returns the value associated with the key or NULL if key not found:wq
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *node;

	index = key_index((const unsigned char *)key, ht->size);
	if (!ht->array[index])
	{
		return (NULL);
	}
	node = ht->array[index];
	while (node)
	{
		if (strcmp(key, node->key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
