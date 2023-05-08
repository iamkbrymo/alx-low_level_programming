#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: file to create
 * @text_content: text to append to file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int num_wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	num_wr = write(fd, text_content, nletters);

	if (num_wr == -1)
		return (-1);

	close(fd);

	return (1);
}
