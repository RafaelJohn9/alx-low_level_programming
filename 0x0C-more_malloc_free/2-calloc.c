#include "main.h"
#include <stdlib.h>

/**
 * _calloc-=write a function that allocates memory for an array using malloc
 * @nmemb:inumber of new member elements in array
 * @size:size of new array
 * Return: void ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;

	mem = malloc((sizeof(size) * nmemb) + 1);
	return (mem);
}
