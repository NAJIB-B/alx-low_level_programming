/**
 * _isalpha - checks if a character is an alphabet or not
 * @c: character to be checked
 *
 * Return: 1 if it's an alphabet and 0 if is not
 */
int _isalpha(int c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	else
		return (0);
}
