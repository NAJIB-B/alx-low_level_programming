/**
 * _strncat - concactenates a certain number of bytes of a character to another
 * @dest: destination to be concacted to
 * @src: string to be concacted
 * @n: number of bytes to be concacted
 *
 * Return: returns a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	j = len = 0;

	for (i = 0; dest[i] != '\0'; ++i)
		++len;
	for (i = len; j < n && src[j] != '\0'; ++i)
	{
		dest[i] = src[j];
		++j;
	}
	if (j < n)
		dest[i] = '\0';
	return (dest);
}
