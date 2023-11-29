#include <stdlib.h>

/**
 * alloc_grid - returns pointer to two dimensional array
 * @width: width of the array
 * @height: height of the array
 *
 * Return: returns pointer to the array of NULL if an error occur
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width == 0 || height == 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		array[i] = malloc(sizeof(int) * width);
		if (array[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
		{
			array[i][j] = 0;
		}
	}
	for (i =0; i < height; ++i)
		free(array[i]);
	free(array);
	return (array);
}
