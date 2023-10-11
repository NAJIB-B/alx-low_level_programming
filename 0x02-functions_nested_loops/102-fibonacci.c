#include <stdio.h>

/**
 * main - Entry
 *
 * Return: 0
 */
int main(void)
{
	long long int i, prev, current, tmp;

	prev = 1;
	current = 2;
	printf("%lld, %lld, ", prev, current);
	for (i = 0; i < 48; ++i)
	{
		printf("%lld", prev + current);
		tmp = prev;
		prev = current;
		current = tmp + prev;
		if (i < 49)
			printf(", ");
	}
	putchar('\n');
	return (0);
}
