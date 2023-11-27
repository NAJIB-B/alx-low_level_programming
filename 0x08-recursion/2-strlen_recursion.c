/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be examined
 *
 * Return: return an int indicating the length of the string
 */
void _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return ( 1 + _strlen_recursion(s + 1));
	return (0);
}
