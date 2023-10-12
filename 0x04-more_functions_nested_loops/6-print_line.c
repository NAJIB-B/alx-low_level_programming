#include "main.h"

/**
 * print_line - prints line
 * @n: parameter n is the length of the line to be printed
 *
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; ++i)
			_putchar('_');
	}
	putchar('\n');
}
