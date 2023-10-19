/**
 * cap_string - capitalize first letter of all words
 * @s: string to be capitalized
 *
 * Return: returns pointer to the string
 */
char *cap_string(char *s)
{
	int state, i, j;
	char arr[] = {
	' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	state = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < 13; ++j)
		{
			if (s[i] == arr[j])
			{
				state = 0;
				break;
			}
		}
		if (state == 0)
			s[i] -= 32;
	}
	return (s);
}
