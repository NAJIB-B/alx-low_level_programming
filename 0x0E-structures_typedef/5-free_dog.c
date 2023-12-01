#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated to dog
 *
 */
void free_dog(dot_t *d)
{
	free(d);
}
