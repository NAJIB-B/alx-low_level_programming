#include <stdarg.h>

/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 *
 * Return: result of addition of arguments or 0 if n is zero
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, sum = 0;

	va_list args;

	va_start(args, n);

	if (n == 0)
		return (0);



	for (i = 0; i < n; ++i)
	{
		x = va_arg(args, int);
		sum += x;
	}

	return (sum);
}
