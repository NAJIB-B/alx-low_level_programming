/**
 * _pow_recursion - Returns the result of a number raised to the power
 * of another number
 * @x: The number whose power is to be raised
 * @y: The power the other number is going to be raised to
 *
 * Return: -1 if y is less than 0, 1 if y is equal to 0, or the value
 * of x raised to the power of y if y is greater than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
