#include "main.h"

/**
 * print_triangle - prints triangle
 * @size: size of triangle to be printed
 *
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 0; i < size; ++i)
		{
			for (j = (size - (i + 1)); j > 0; --j)
			{
				_putchar(' ');
			}
			for (k = (size - (i + 1)); k < size; ++k)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
