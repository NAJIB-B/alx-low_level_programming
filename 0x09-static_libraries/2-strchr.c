/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to find
 *
 * Return: returns address of the character if it is found
 * or Null if it wasn't found
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	p = s;
	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == c)
			return (p);
		p++;
	}
	return (0);
}
