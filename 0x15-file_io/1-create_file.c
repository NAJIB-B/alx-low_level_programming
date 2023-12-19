#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>

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

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content: content to insert in file
 *
 * Return: 1 if successful and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int filedeceptor;
	ssize_t byte_written;

	if (filename == NULL)
		return (-1);

	filedeceptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (filedeceptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(filedeceptor);
		return (1);
	}
	else
	{
		byte_written = write(filedeceptor, text_content, _strlen(text_content));
		if (byte_written == -1)
			return (-1);
	}
	close(filedeceptor);
	return (1);
}
