#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to be appended
 * @text_content: text to append
 *
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int num_wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		num_wr = write(fd, text_content, nletters);

		if (num_wr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
