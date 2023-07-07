#include "hash_tables.h"

/**
 * hash_table_create-creates a  new hashtable
 * @size:size of the hash table
 * Return: returns a pointer to a hashtable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable;

	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
	{
		return (NULL);
	}
	hashtable->size = size;
	hashtable->array = malloc(sizeof(char *) * size);
	if (!hashtable->array)
	{
		return (NULL);
	}
	return (hashtable);
}
