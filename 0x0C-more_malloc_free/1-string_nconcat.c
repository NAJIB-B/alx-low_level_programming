#include "main.h"
#include <stdlib.h>

/**
 * _strlen - gets the length of a string
 * @s: string to check
 *
 * Return: length of the string
 */
unsigned int _strlen(char *s)
{
	int i, size = 0;

	for (i = 0; s[i] != '\0'; ++i)
	{
		++size;
	}
	return (size);
}

/**
 * string_nconcat - concatenate one string and a certain number of another
 * string
 * @s1: first string
 * @s2: second string
 * @n: the number of s2 string to concatenate
 *
 * Return: pointer to the newly created string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0, progress = 0, size = 0, s2_len;
	char *ptr;

	if (s1 != NULL)
		size += _strlen(s1);
	if (s2 != NULL)
	{
		s2_len = _strlen(s2);

		if (n >= s2_len)
			size += s2_len;
		else
			size += n;
	}

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; ++i)
		{
			ptr[i] = s1[i];
			++progress;
		}
	}
	if (s2 != NULL)
	{
		for (i = progress; i < size; ++i)
		{
			ptr[i] = s2[j];
			++j;
		}
	}
	ptr[i + 1] = '\0';

	return (ptr);
}
