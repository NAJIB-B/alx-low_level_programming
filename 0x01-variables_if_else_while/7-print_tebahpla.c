#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int z;

	for (z = 'z'; z >= 'a'; --z)
		putchar(z);
	putchar('\n');
	return (0);
}
