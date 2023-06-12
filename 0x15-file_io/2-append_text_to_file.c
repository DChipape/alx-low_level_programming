#include "main.h"

/**
 * _strlen - find the string length
 * @str: a string
 * Return: the length
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * append_text_to_file - append at the end of a file, a text
 * @filename: file name
 * @text_content: add this text content at the end of a file
 * Return: 1 on success, -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n_wrote;

	if (!filename)
		return (-1);

	/* open file if it exists */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* if nothing to write, still successful */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write */
	n_wrote = write(fd, text_content, _strlen(text_content));
	if (n_wrote == -1 || n_wrote != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
