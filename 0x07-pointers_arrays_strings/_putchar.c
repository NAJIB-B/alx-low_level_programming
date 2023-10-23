#include <unistd.h>

/**
 * _putchar - print a character
 * @c: character to be printed
 *
 * Return: 0
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
