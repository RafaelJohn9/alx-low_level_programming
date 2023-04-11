#include "main.h"
#include <stdlib.h>

/**
 * create_array-creates array of initialised specific chars
 * @size:size of it
 * @c:char
 * Return:char
 */
char *create_array(unsigned int size, char c)
{
	char *mem = malloc(sizeof(char) * size);
	unsigned int i;

	if (mem == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		mem[i] = c;
	}
	return (mem);
}
