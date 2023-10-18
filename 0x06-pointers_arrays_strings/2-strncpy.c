/**
 * _strncpy - copies a string to another string
 * @dest: destinaton to be copied to
 * @src: string that would be copied
 * @n: number of bytes to copy
 *
 * Return: returns pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; ++i)
	{
		des[i] = src[i];
	}

	if (i < n)
		dest[i] = '\0';
}
