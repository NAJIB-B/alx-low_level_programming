#include "main.h"

/**
 * print_alphabet - prints all the english alphabets in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; ++i)
		_putchar(i);
	_putchar('\n');
}
