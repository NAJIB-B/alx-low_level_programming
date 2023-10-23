/**
 * _memcpy - copies memory area to another memory area
 * @dest: memory area to be copied to
 * @src: memory area to copy from
 * @n: amount of memory to copy
 *
 * Return: returns address of memory area copied to
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *dp, *sp;

	dp = dest;
	sp = src;
	for (i = 0; i < n; ++i)
	{
		*dp = *sp;
		dp++;
		sp++;
	}
	return (dest);
}
