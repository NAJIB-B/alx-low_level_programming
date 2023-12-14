#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the number that is going to be conveted
 *
 */
void print_binary(unsigned long int n)
{
	int bit_position = 0, result = 0, i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		result |= (n & 1) << bit_position;
		n >>= 1;
		++bit_position;
	}

	for (i = (bit_position - 1); i >= 0; --i)
	{
		_putchar('0' + ((result >> i) & 1));
	}
}
