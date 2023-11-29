#include <stddef.h>
#include <stdlib.h>

/**
 * str_concat - concactenate strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string or NULL if an error
 * occur
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, size = 0;
	char *string;

	if (s1 == NULL && s2 == NULL)
		return (NULL);

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; ++i)
			++size;
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; ++i)
			++size;
	}
	string = malloc(sizeof(char) * (size + 1));

	if (string == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (i = 0; s1[i] != '\0'; ++i)
		{
			string[j] = s1[i];
			++j;
		}
	}
	if (s2 != NULL)
	{
		for (i = 0; s2[i] != '\0'; ++i)
		{
			string[j] = s2[i];
			++j;
		}
	}
	string[j + 1] = '\0';

	return (string);
}
