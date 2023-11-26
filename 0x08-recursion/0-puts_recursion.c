#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 * @s: string to be printed
 *
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
	}

	_putchar(s[0]);
	_puts_recursion(s + 1);

}
