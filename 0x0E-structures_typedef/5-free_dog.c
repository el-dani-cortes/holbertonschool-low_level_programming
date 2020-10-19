#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Function that frees dogs.
 * @d: Pointer to struct data
 *
 * Return: Always void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
