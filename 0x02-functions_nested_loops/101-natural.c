#include <stdio.h>

/**
 * main - Entry
 *
 * Return: Always 0
 */
int main(void)
{
	int i, result = 0;

	for (i = 0; i < 1024; ++i)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
		{
			result += i;
		}
	}
	printf("%d\n", result);
}
