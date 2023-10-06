#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	int lc, mc, sc;

	lc = 48;
	mc = 49;
	sc = 50;
	while (lc <= 55)
	{
		while (mc <= 56)
		{
			while (sc <= 57)
			{
				putchar(lc);
				putchar(mc);
				putchar(sc);
				if (lc != 55)
				{
					putchar(',');
					putchar(' ');
				}
				++sc;
			}
			++mc;
			sc = mc + 1;
		}
		++lc;
		mc = lc + 1;
		sc = lc + 2;
	}
	putchar('\n');
	return (0);
}
