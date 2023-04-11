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
	char *mem = malloc(sizeof(int) * size);
	unsigned int num;

	if (size == 0)
	{
		return (NULL);
	}
	for (num = 0; num < size; num++)
	{
		mem[num] = c;
	}
	mem[num] = c;
	return (mem);
}
