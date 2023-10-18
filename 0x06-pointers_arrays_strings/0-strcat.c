/**
 * _strcat - concactenates two strings
 * @dest: destination of the where the other string will be concacted
 * @src: string that would be concacted
 *
 * Return: returns a pointer to the concactenated string i.e dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len, j;

	j = 0;

	for (i = 0; i != '\0'; ++i)
		++len;
	for (i = (len - 1); src[i] != '\0'; ++i)
	{
		dest[i] = src[j];
		++j;
	}

	return (dest);
}
