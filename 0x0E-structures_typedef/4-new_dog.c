#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog- new dog
 * @name:name of dog
 * @age:age of dog
 * @owner:owner of dog
 * Return:new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len_name, len_owner;
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = malloc(len_name + 1);
	if (new_dog->name == NULL)
	{
		return (NULL);
	}
	else
	{
		len_name = strlen(name);
		strcpy(new_dog->name, name);
	}
	new_dog->age = age;
	new_dog->owner = malloc(len_owner + 1);
	if (new_dog->owner == NULL)
	{
		return (NULL);
	}
	else
	{
		len_owner = strlen(owner);
		strcpy(new_dog->owner, owner);
	}
	return (new_dog);
}
