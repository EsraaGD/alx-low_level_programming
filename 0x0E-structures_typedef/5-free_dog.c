#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees any memory occupied by type struct dog.
 * @d: Pointer
 * Return: 0
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
