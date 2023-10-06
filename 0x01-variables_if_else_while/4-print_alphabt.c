#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int a, z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		if(a != 'e' && a != 'q')
			putchar(a);
		++a;
	}
	putchar('\n');
	return (0);
}
