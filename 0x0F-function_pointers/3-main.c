#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - entry point for mini calculator project
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 for success and non-zero otherwise
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error since from main");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	operation = get_op_func(argv[2]);

	result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
