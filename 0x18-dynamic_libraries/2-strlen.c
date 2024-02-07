/**
 * _strlen - prints length of string
 * @str: string to be examined
 *
 * Return: returns the length of the string
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		;

	return (i);
}
