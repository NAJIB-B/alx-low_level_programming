#include <stddef.h>
#include <stdlib.h>

/**
 * argstostr - concatenates arguments to your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to concatenated string and NULL if an error
 * occur
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int i, j, size = 0, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; ++j)
			++size;
	}
	string = malloc(sizeof(char) * size + ac + 1);
	if (string == NULL)
		return (NULL);
	for (i = 0; i < ac; ++i)
	{
		for (j = 0; av[i][j] != '\0'; ++j)
		{
			string[k] = av[i][j];
			++k;
		}
		string[k] = '\n';
		++k;

	}
	string[k] = '\0';
	return (string);
}
