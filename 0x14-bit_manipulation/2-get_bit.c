#include "main.h"
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get bit from
 * @index: index of bit to get
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	value = ((n >> index) & 1);

	return (value);
}
