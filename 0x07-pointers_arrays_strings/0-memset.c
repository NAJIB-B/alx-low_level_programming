/**
 * _memset - fills memory with a constant byte
 * @s: address to start from
 * @b: character to be filled with
 * @n: number of characters to fill
 *
 * Return: returns memory address you started from
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;
	char *p;

	p = s;

	for (i = 0; i < n; ++i)
	{
		*p = b;
		p++;
	}
	return (s);
}
