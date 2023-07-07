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
	unsigned long int index = 0;
	char *val;

	if (!ht)
		return (0);

	item = NULL;
	item = malloc(sizeof(hash_node_t));

	if (!item)
		return (0);
	if (!key || *key == '\0')
		return (0);
	if (!value)
		return (0);

	val = malloc(strlen(value) + 1);
	if (val == NULL)
		return (0);

	strcpy(val, value);
	index = key_index((unsigned char *)key, ht->size);
	item->next = NULL;
	item->key = (char *)key;
	item->value = val;

	if (ht->array[index])
	{
		item->next = (ht->array[index]);
	}
	ht->array[index] = item;
	return (1);
}
