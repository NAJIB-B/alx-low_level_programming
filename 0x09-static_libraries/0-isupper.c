/**
 * _isupper - checks if a value if upper  case
 * @n: parameter to be checked
 *
 * Return: 1 if it is upper and 0 otherwise
 */
int _isupper(int n)
{
	if (n > 64 && n < 91)
		return (1);
	else
		return (0);
}
