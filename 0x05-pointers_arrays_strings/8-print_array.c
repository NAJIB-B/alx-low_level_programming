#include <stdio.h>

/**
 * print_array - print certain number of elements of an array
 * @a: array to be printed
 * @n: number of element to be printed
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; ++i)
	{
		printf("%d", a[i]);

		if (i < (n - 1))
		{
			printf(", ");
		}
	}
	putchar('\n');
}
