#include <stdarg.h>
#include <stdio.h>


/**
 * print_all - prints all arguments if different format
 * @format: format of arguments to be passed
 *
 */
void print_all(const char *const format, ...)
{
	int i = 0, size = 0;
	char *string_value, *sep = "";

	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{
		++size;
		++i;
	}
	i = 0;
	while (i < size)
	{
		switch (format[i])
		{
		case 'i':
			printf("%s%d", sep, va_arg(args, int));
			break;
		case 'c':
			printf("%s%c", sep, va_arg(args, int));
			break;
		case 'f':
			printf("%s%f", sep, va_arg(args, double));
			break;
		case 's':
			string_value = va_arg(args, char *);
			if (string_value == NULL)
				printf("(nil)");
			printf("%s%s", sep, string_value);
			break;
		default:
			break;
		}
		sep = ", ";
		++i;
	}
	printf("\n");
}
