#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: number to start from
 * @max: number to strop
 *
 * Return: pointer to the created array
 */
int *array_range(int min, int max)
{
	int i, j = 0;
	int *ptr;

	if (min > max)
		return (NULL);
	ptr = malloc(sizeof(int) * ((max - min) + 1));
	if (ptr == NULL)
		return (NULL);

	for (i = min; i <= (max + 1); ++i)
	{
		ptr[j] = i;
		++j;		
	}

	return (ptr);

}
