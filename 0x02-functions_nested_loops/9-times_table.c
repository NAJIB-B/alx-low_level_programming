#include "main.h"

/**
 * times_table - prints times table of 9
 *
 */
void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			result = i * j;
			if (result < 10)
			{
				_putchar(result + '0');
			}
			else
			{
				_putchar(((result / 10) % 10) + '0');
				_putchar((result % 10) + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				if (((j + 1) * i) < 10)
				{
					_putchar(' ');
				}
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
