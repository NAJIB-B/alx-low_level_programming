#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int n, lg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lg = n % 10;
	if(lg > 5)
		printf("Last digit of %d is %d and is greater than 5\n");
	if(lg == 0)
		printf("Last digit of %d is %d and is 0\n");
	if(lg > 6 && lg != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n");
	return (0);
}
