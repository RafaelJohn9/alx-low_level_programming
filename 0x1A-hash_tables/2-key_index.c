#include "hash_tables.h"

/**
 * key_index-a function that gives you the index of a key.
 * @key:key that is to be used in dictionary
 * @size:size of the array of the hashtable
 * Return:indez of a key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int myKey;

	if (!key)
	{
		return (0);
	}
	if (size <= 0)
	{
		return (0);
	}
	myKey = hash_djb2(key);
	return (myKey % size);
}
