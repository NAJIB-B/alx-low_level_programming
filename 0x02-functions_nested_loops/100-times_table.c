#include "main.h"

/**
 * print_times_table - prints times table of any given number
 * @n: number of times table to be printed
 *
 */
void print_times_table(int n)
{
	int i, j, result;

	if (n < 15 && n > 0)
	{
	for (i = 0; i <= n; ++i)
	{
		for (j = 0; j <= n; ++j)
		{
			result = i * j;
			if (result < 10)
			{
				_putchar(result + '0');
			}
			else if (result < 100)
			{
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(((result / 100) % 10) + '0');
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (j < n)
			{
				_putchar(',');
				if (((j + 1) * i) < 10)
					_putchar(' ');
				if (((j + 1) * i) < 100)
					_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	}
}
