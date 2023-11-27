/**
 * factorial - This function returns the factorial of a number
 * @n: number to give factorial of
 *
 * Return: returns an int indicating the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	if (n > 1)
		return (n * factorial(n -1));
}
