#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings seperated by a separator
 * @separator: separator to be used
 * @n: the total count of strings
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; ++i)
	{
		x = va_arg(args, char *);

		if (separator == NULL)
		{
			printf("%s", (x == NULL ? "(nil)" : x));
		}
		else
		{
			if (i == 0)
				printf("%s", (x == NULL ? "(nil)" : x));
			else
				printf("%s%s", separator, (x == NULL ? "(nil)" : x));
		}
	}
	printf("\n");
	va_end(args);
}


