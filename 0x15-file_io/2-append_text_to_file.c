#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file
 * @text_content: NULL terminated string
 *
 * Return: 1 when successful and -1 if not successful
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, str_len = 0;

	if (!filename)
		return (-1);

	while (text_content[str_len])
		str_len++;

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, str_len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
