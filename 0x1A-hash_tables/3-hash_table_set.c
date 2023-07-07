#include "hash_tables.h"

/**
 * hash_table_set-a function that adds an element to the hashtable
 * @ht:hashtable pointer
 * @key:key to hashtable
 * @value:the const value
 * Return: 1 if succesful else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long int index;

	item = NULL;
	item = malloc(sizeof(hash_node_t));

	if (!item)
	{
		return (0);
	}
	if (!key)
	{
		return (0);
	}
	if (!value)
	{
		return (0);
	}

	index = key_index((unsigned char *)key, ht->size); 
	item->next = NULL;
	item->key = (char *)key;
	item->value = (char *)value;

	if (ht->array[index])
	{
		item->next = (ht->array[index]);
		ht->array[index] = item;
	}
	ht->array[index] = item;
	return (1);
}
