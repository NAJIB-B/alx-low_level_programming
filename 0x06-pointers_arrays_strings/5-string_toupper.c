/**
 * string_toupper - convert string to uppercase
 * @s: string to be converted
 *
 * Return: return pointer to the string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] > 96 && s[i] < 123)
			s[i] -= 32;
	}
	return (s);
}
