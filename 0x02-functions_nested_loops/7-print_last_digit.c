#include "main.h"

/**
 * print_last_digit - prints and  the last digit of a number
 * @n: the number who's last digit will be printed and returned
 *
 * Return: returns last digit of the argument
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result < 0)
	{
		result *= -1;
		_putchar(result + '0');
		return (result);
	}
	_putchar(result + '0');
	return (result);
}
