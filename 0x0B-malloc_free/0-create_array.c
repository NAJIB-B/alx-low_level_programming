#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - creates an array of characters
 * @size: size of the array
 * @c: character to fill array with
 *
 * Return: returns a pointer to the array if successful and NULL
 * otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	for (i = 0; i < size; ++i)
	{
		array[i] = c;
	}
	return (array);


}
