#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of file to create
 * @text_content: text to write into file.
 *
 * Return: 1 when successful or -1 if it fails.
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, str_len;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

		if (o == -1)
			return (-1);

		close(o);

		return (1);
	}

	str_len = 0;
	while (text_content[str_len])
		str_len++;

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, str_len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
