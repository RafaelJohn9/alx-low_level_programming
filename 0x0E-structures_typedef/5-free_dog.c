#include <stdlib.h>
#include "dog.h"

/**
 * free_dog-a function that frees dogs
 * @d:value
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->age);
	free(d->owner);
	free(d);
}

