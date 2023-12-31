#include <stdlib.h>
#include <stddef.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to dog
 * @d: dog to free
 *
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
