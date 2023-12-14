#include "main.h"

/**
 * set_bit - set the value of bit to 1 at a given index
 * @n: value to be manipulated
 * @index: index of bit to manipulate
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n > (sizeof(unsigned long int) * 8))
		return (-1);i

	*n |= pow_two(index);
	return (1);
}
