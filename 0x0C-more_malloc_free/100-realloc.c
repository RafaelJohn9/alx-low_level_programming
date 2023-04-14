#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _realloc-function that allocat a memory block using malloc and free
 * @ptr:ptr
 * @old_size:prev size
 * @new_size:new size
 * Return:ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;

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
		mem = malloc(new_size + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		strncpy(mem, ptr, new_size);
		free(ptr);
		return (mem);
	}
	if (old_size >  new_size)
	{
		mem = malloc(new_size + 1);
		if (ptr == NULL)
		{
			return (NULL);
		}
		strncpy(mem, ptr, new_size);
		free(ptr);
		return (mem);
	}
	return (ptr);
}
