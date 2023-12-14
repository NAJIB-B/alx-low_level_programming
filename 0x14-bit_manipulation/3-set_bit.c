#include "main.h"
#include <stdlib.h>

/**
 * pow_two - raise two to the power of a number
 * @n: the exponential of two
 *
 * Return: returns result of two to power n
 */
unsigned int pow_two(int n)
{
        unsigned int result = 1;
        int i;

        for (i = 0; i < n; ++i)
        {
                result *= 2;
        }
        return (result);
}


/**
 * set_bit - set the value of bit to 1 at a given index
 * @n: value to be manipulated
 * @index: index of bit to manipulate
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= pow_two(index);
	return (1);
}
