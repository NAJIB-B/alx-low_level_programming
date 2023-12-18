#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to print
 *
 * Return: number of bytes read and printed or 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte_written, byte_read;
	int filedeceptor;
	char *string_buffer = malloc(letters);

	if (filename == NULL)
		return (0);

	filedeceptor = open(filename, O_RDONLY);
	if (filedeceptor == -1)
		return (0);

	byte_read = read(filedeceptor, string_buffer, letters);
	if (byte_read == -1)
		return (0);

	byte_written = write(STDOUT_FILENO, string_buffer, byte_read);
	if (byte_written == -1 || byte_written != byte_read)
		return (0);

	free(string_buffer);
	close(filedeceptor);
	return (byte_written);
	
}
