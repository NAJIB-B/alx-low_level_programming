#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: lenght of line to be printed
 *
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
		{
			for (j = 0; j < i; ++j)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
