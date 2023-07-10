#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads file text to print
 * @filename: a file text that is read
 * @letters: count of letters
 * Return: w- the bytes number and printed
 *        0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

