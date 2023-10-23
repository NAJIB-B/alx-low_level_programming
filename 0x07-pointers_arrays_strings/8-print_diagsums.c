#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonal of a matrix
 * @a: pointer to the first element of matrix
 * @size: size of matrix
 *
 */
void print_diagsums(char *a, int size)
{
	int i, ms, ss, m, s, r;
	int *ptr;

	ptr = a;
	s = size - 1;
	m = ms = ss = r = 0;

	for (i = 0; i < (size * size); ++i)
	{
		if (i == m)
		{
			ms += *ptr;
			m += size + 1;
		}
		if (i == s)
		{
			if (r >= size)
				continue;
			ss += *ptr;
			s += size - 1;
			++r;
		}
		++ptr;
	}

	printf("%d, %d\n", ms, ss);
}
