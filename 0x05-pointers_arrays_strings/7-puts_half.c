#include "main.h"

/**
 * puts_half - prints half of string
 * @str: string to be printed
 *
 */
void puts_half(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		++len;
	}

	if ((len % 2) != 0)
	{
		for (i = ((len / 2) + 1); str[i] != '\0'; ++i)
			_putchar(str[i]);
		_putchar('\n');
	}
	else
	{
		for (i = (len / 2); str[i] != '\0'; ++i)
			_putchar(str[i]);
		_putchar('\n');
	}
}
