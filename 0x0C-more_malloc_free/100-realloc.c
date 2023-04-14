#include "main.h"
#include <stdlib.h>

/**
 * _realloc-function that allocat a memory block using malloc and free
 * @ptr:ptr
 * @old_size:prev size
 * @new_size:new size
 * Return:ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
		{
			return (NULL);
		}
		return (ptr);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size > old_size)
	{
		i = new_size - old_size;
		ptr = malloc(old_size + i);
	}
	return (ptr);
}
