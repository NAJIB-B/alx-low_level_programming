/**
 * _strstr - finds the first occurence of a substring in a string
 * @haystack: string to search from
 * @needle: string to find
 *
 * Return: returns pointer to the begining of located substring or
 * Null if it wasn't found
 */
char *_strstr(char *haystack, char *needle)
{
	int match, pos, i, j;

	for (i = 0; haystack[i] != '\0'; ++i)
	{
		if (haystack[i] == needle[0])
	{
		pos = i;
		for (j = 0; needle[j] != '\0'; ++j)
		{
			if (haystack[pos] != needle[j])
			{
				match = 0;
				break;
			}
			match = 1;
			++pos;
		}
	}
		if (match == 1)
			return (&haystack[i]);
	}
	return (0);
}
