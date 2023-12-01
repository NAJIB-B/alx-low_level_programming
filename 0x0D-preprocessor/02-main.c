#include "main.h"

/**
 * main - prints the name of the file
 *
 * Return: 0 for success and 1 otherwise
 */

int main()
{
	char *name = __FILE__;
	int i;

	for (i = 0; name[i] != '\0'; ++i)
		_putchar(name[i]);
	_putchar('\n');
	return (0);
}
