/**
 * _abs - get's the absolute value of a number
 * @n: number to be examined
 *
 * Return: returns the absolute number of the argument
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n == 0)
		return (0);
	else
		return (n * -1);
}
