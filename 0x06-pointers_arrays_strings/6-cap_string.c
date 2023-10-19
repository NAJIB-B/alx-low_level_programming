/**
 * cap_string - capitalize first letter of all words
 * @s: string to be capitalized
 *
 * Return: returns pointer to the string
 */
char *cap_string(char *s)
{
	int i;
	char last_c;

	last_c = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] > 96 && s[i] < 123)
		{
			if (last_c == ' ' ||
					 last_c == '\t'   ||
					 last_c == '\n'   ||
					 last_c == ','    ||
					 last_c == ';'    ||
					 last_c == '.'    ||
					 last_c == '!'    ||
					 last_c == '?'    ||
					 last_c == '"'    ||
					 last_c == '('    ||
					 last_c == ')'    ||
					 last_c == '{'    ||
					 last_c == '}')
			{
				s[i] -= 32;
			}
		}
		last_c = s[i];
	}
	return (s);
}
