#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	long int i, prev, current, tmp;

	prev = 1;
	current = 2;
	printf("%ld, %ld, ", prev, current);
	for (i = 0; i < 48; ++i)
	{
		printf("%ld", prev + current);
		tmp = prev;
		prev = current;
		current = tmp + prev;
		if (i < 47)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
