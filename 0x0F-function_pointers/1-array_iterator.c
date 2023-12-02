#include <stddef.h>

/**
 * array_iterator - iterates over array and performs an action for all the 
 * elements
 * @array: the array
 * @size: size of the array
 * @action: action to perform on the array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}	
