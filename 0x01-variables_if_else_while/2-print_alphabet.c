#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int start, stop;

	start = 'a';
	stop = 'z';
	while (start  <= stop)
	{
		putchar(start);
		++start;
	}
	putchar('\n');
	return (0);
}
