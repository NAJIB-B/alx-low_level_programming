#include <stddef.h>

/**
 * int_index - returns the index of the first element for which the 
 * cmp function does not return 0
 * @array: array to check
 * @size: size of array
 * @cmp: compare function
 *
 * Return: index of number if number is found or -1 otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, return_val;
	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; ++i)
	{
		return_val = cmp(array[i]);

		if (return_val != 0)
			return (i);
	}

	return (-1);
}
