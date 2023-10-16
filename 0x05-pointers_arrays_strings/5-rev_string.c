#include "main.h"

/**
 * rev_string - reverses a string
 * @c: string to be reversed
 *
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		++len;
	}

	for (i = 0; i <= ((len / 2) - 1); ++i)
	{
		tmp = s[len - (i + 1)];
		s[len - (i + 1)] = s[i];
		s[i] = tmp;
	}
}
