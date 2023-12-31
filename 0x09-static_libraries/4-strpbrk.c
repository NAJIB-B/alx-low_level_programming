/**
 * _strpbrk - find the first occurence of any byte present in accept
 * @s: string to search
 * @accept: string to search from
 *
 * Return: return a pointer to the byte in s that matches any byte
 * in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}
