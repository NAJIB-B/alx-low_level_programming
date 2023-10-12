#include <stdio.h>

/**
 * main - entry
 *
 * Return: 0
 */
int main()
{
	long int i, max, n;

	n = 612852475143;
	max = -1;

	while((n % 2) == 0)
	{
		n = n / 2;
		max = 2;
	}

	for (i = 3; n > 1; i += 2)
	{
		while((n % i) == 0)
		{
			n = n / i;
			max = i;
		}
	}
	printf("%ld\n", max);
	return (0);
}
