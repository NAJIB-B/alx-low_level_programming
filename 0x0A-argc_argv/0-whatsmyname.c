#include <stdio.h>

/**
 * main - prints it's name
 * @argc: number of arguments
 * @argv: array of the arguments
 *
 * Return: 0 for success and non zero otherwise
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
