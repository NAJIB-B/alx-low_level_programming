#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 if successful and 1 if error is encountered
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0, money;
	int change[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
	money = atoi(argv[1]);
	if (money <= 0)
	{
		puts("0");
		return (0);
	}
	for (i = 0; i < 5; ++i)
	{
		for (j = 0; ; ++j)
		{
			if ((money / change[0]) == 0)
				break;
			money -= change[0];
			result++;
			if (money == 0)
			{
				printf("%d", result);
				return (0);
			}
		}
	}
	return (0);
}
