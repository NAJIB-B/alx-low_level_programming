#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int cn, c;

	cn = 48;
	c = cn;
	while (cn < 57)
	{
		while (c < 57)
		{
			++c;
			putchar(cn);
			putchar(c);
			if (cn != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
		++cn;
		c = cn;
	}
	putchar('\n');
	return (0);
}
