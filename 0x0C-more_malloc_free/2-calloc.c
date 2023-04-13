#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc-=write a function that allocates memory for an array using malloc
 * @nmemb:inumber of new member elements in array
 * @size:size of new array
 * Return: void ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	mem = malloc((sizeof(char) * nmemb * size) + 1);
	if (mem == NULL)
	{
		return (NULL);
	}
	memset(mem, 0, nmemb * size);
	return (mem);
}
