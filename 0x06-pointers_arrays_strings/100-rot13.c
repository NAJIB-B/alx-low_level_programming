/**
 * rot13 - changes string to rot13 encoding
 * @s: string to be encoded
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	char original[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	for (i = 0; s[i] != '\0'; ++i)
	{
		for (j = 0; j < 52; ++j)
		{
			if (s[i] == original[j])
			{
				s[i] = rot13[j];
				break;
			}
		}
	}
	return (s);
}
