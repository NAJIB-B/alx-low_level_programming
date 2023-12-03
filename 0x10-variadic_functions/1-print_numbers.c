#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints number seperated by a separator
 * @separator: separator to be used
 * @n: the total count of numbers
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		x = va_arg(args, int);

		if (separator == NULL)
		{
			printf("%d", x);
		}
		else
		{
			if (i == 0)
				printf("%d", x);
			else
				printf("%s%d", separator, x);
		}
	}
	printf("\n");
	va_end(args);
}

