#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string to be printed
 *
 */
void print_rev(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		++len;
	}

	for (i = (len - 1); i >= 0; --i)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
