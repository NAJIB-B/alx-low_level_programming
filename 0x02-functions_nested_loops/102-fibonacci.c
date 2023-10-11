#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	int i, prev, current, tmp;

	prev = 1;
	current = 2;
	printf("%d, %d, ", prev, current);
	for (i = 0; i < 50; ++i)
	{
		printf("%d", prev + current);
		tmp = prev;
		prev = current;
		current = tmp + prev;
		if (i < 49)
			printf(", ");
	}
	putchar('\n');
}
