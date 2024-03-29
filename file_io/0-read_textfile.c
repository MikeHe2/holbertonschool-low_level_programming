#include "main.h"

/**
 * read_textfile - Function that reads a text file and prints it
 * to the POSIX standard output.
 *
 * @filename: Name of the file.
 * @letters: Number of letters to read and print.
 *
 * Return: 0 if filename is NULL, if write fails or does no write
 * the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)

{

	char *buffer;
	ssize_t o, r, w;

	o = open(filename, O_RDONLY);
	if (o == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(o);
		return (0);
	}

	r = read(o, buffer, letters);
	w = write(STDOUT_FILENO, buffer, o);

	if (w == -1 || r == -1 || r != w)
	{
		close(o);
		free(buffer);
		return (0);
	}
	free(buffer);
	close(o);

	return (w);
}
