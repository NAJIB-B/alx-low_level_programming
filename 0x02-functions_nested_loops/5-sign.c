#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number that will be examined
 *
 * Return: 1 if it's positive, 0 if the number is zero
 * and -1 if the number is negetive
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
