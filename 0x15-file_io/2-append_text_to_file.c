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
 * append_text_to_file - appends text to file
 * @filename: name of file
 * @text_content: content to insert in file
 *
 * Return: 1 if successful and -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filedeceptor;
	ssize_t byte_written;

	if (filename == NULL)
		return (-1);

	filedeceptor = open(filename, O_WRONLY | O_APPEND);
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
