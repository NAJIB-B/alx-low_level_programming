#include "main.h"

/**
 * jack_bauer - prints fromm 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; ++i)
	{
		for (j = 0; j < 60; ++j)
		{
			putchar(((i / 10) % 10) + '0');
			putchar((i % 10) + '0');
			putchar(':');
			putchar(((j / 10) % 10) + '0');
			putchar((j % 10) + '0');
			putchar('\n');
		}
	}
}
