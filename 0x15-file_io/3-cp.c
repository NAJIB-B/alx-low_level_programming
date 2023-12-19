#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * catch_error - logs error message and exits
 * @code: exit code
 * @msg: error message
 * @file_name: file name in error message
 */
void catch_error(int code, char *msg, char *file_name)
{
	if (file_name == NULL)
	{
		dprintf(STDERR_FILENO, "%s\n", msg);
		exit (code);
	}
	else
	{
	
		dprintf(STDERR_FILENO, "%s %s\n", msg, file_name);
		exit (code);
	}
}

/**
 * main - copies content of one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 *
 */

int main(int argc, char *argv[])
{
	ssize_t byte_written, byte_read;
	int file_from, file_to;
	char buffer[1024];

	if (argc != 3)
		catch_error(97, "Usage: cp file_from file_to", NULL);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		catch_error(98, "Error: Can't read from file", argv[1]);

	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		catch_error(99, "Error: Can't write to from top", argv[2]);

	while ((byte_read = read(file_from, buffer, sizeof(buffer))) > 0)
	{
		if (byte_read == -1)
			catch_error(98, "Error: Can't read from file", argv[1]);

		byte_written = write(file_to, buffer, byte_read);

		if (byte_written == -1)
			catch_error(99, "Error: Can't write to from bottom", argv[2]);

	}


	if (close(file_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_from);
		exit (100);
	}

	if (close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", file_to);
		exit (100);
	}

	return (0);
}

