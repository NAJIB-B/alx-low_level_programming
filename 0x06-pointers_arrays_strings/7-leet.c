/**
 * leet - convert string to leet string
 * @s: string to be converted
 *
 * Return: returns pointer to the string
 */
char *leet(char *s)
{
	char l[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char n[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < 10; ++j)
		{
			if (s[i] == l[j])
			{
				s[i] = n[j];
				break;
			}
		}
	}
	return (s);
}
