#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int a, z, A, Z;

	a = 'a';
	z = 'z';
	A = 'A';
	Z = 'Z';
	while (a  <= z)
	{
		putchar(a);
		++a;
	}
	while (A <= Z)
	{
		putchar(A);
		++A;
	}
	putchar('\n');
	return (0);
}
