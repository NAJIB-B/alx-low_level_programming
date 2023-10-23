/**
 * _strspn - gets the length of a preffix substring
 * @s: string to check
 * @accept: string to check from
 *
 * Return: returns number of bytes in initial segment of s also present
 * in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int result, last_result;
	int i, j;

	result = 0;
	for (i = 0; s[i] != '\0'; ++i)
	{
		last_result = result;
		for (j = 0; accept[j] != '\0'; ++j)
		{
			if (s[i] == accept[j])
			{
				++result;
				continue;
			}
		}
		if (last_result == result)
			return (result);
	}
	return (result);
}
