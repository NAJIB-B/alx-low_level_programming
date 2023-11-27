/**
 * _isdigit - checks if a value is a digit
 * @c: value to be checked
 *
 * Return: 1 if it is a digit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
