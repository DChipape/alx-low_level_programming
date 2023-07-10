#include "main.h"

/**
 * append_text_to_file - add taxt to file end
 * @filename: A pointer to filename
 * @text_content: The string to append at the end of file
 *
 * Return: If it fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int k, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	k = open(filename, O_WRONLY | O_APPEND);
	w = write(k, text_content, len);

	if (k == -1 || w == -1)
		return (-1);

	close(k);

	return (1);
}
