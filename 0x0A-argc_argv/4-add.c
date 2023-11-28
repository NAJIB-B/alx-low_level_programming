#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints result of addition of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful and 1 if an error is encountered
 */
int main(int argc, char *argv[])
{
	int i, result = 0;
	char *flag;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		strtol(argv[i], &flag, 10);

		if (*flag != '\0')
		{
			puts("Error");
			return (1);
		}
		else
		{
			result += atoi(argv[i]);
		}
	}

	printf("%d\n", result);
	return (0);
}
