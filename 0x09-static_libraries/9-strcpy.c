/**
 * _strcpy - copies string
 * @dest: the buffer address
 * @src: the address of the string to be copied
 *
 * Return: returns the address of the buffer
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (src[0])
	{
	for (i = 0; src[i] != '\0'; ++i)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	}
	return (dest);
}
