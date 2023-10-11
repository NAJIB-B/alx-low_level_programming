#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main(void)
{
	long int i, prev, current, tmp, even_sum;

	prev = 1;
	current = 2;
	even_sum = 2;
	for (i = 0; i < 30; ++i)
	{
		if (((prev + current) % 2) == 0)
			even_sum += prev + current;
		tmp = prev;
		prev = current;
		current = tmp + prev;
	}
	printf("%ld\n", even_sum);
	return (0);
}
