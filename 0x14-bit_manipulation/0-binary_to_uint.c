#include "main.h"
#include <stddef.h>

/**
 * _strlen - returns lenght of string
 * @s: string to examine
 *
 * Return: returns length of string
 */
int _strlen(const char *s)
{
	int i, size = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		++size;
	}
	return (size);
}

/**
 * pow_two - raise two to the power of a number
 * @n: the exponential of two
 *
 * Return: returns result of two to power n
 */
unsigned int pow_two(int n)
{
	unsigned int result = 1;
	int i;

	for (i = 0; i < n; ++i)
	{
		result *= 2;
	}
	return (result);
}

/**
 * binary_to_uint - convert a binary to an unsigned int
 * @b: the binary number to convert
 *
 * Return: returns the unsigned int or 0 if any error
 */
unsigned int binary_to_uint(const char *b)
{
	int i, size, j = 0;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	size = _strlen(b);


	for (i = (size - 1); i >= 0; --i)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		if (b[i] == '0')
		{
			++j;
			continue;
		}
		else
		{
			if (j == 0)
			{
				result += 1;
			}
			else
			{
				result += pow_two(j);
			}
			++j;
		}
	}
	return (result);
}

