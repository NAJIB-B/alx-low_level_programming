#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of multiplication of two arguments
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if there are two args and 1 otherwise
 */
int main(int argc, char *argv[])
{
	if (argc > 3 || argc < 3)
	{
		puts("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
