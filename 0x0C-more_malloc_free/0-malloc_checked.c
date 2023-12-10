#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory in the heap
 * @b: size of memory to allocate
 *
 * Return: returns address of the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
