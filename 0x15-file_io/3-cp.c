#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *filename);
void close_status(int fd);

/**
 * create_buffer -> Alloctes 1024 bytes to the buffer
 * @filename: name of file
 *
 * Return: pointer to the buffer created
 */
char *create_buffer(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buffer);
}

/**
 * close_status -> close a file descriptor
 * @fd: the file descriptor
 */
void close_status(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copy contents from file a to file b
 * @argc: number of elements in list
 * @argv: list of elements
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int f_from, f_to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	f_from = open(argv[1], O_RDONLY);
	r = read(f_from, buffer, 1024);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (r > 0)
	{
		if (f_from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(f_to, buffer, r);
		if (f_to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(f_from, buffer, 1024);
		f_to = open(argv[2], O_WRONLY | O_APPEND);

	}

	free(buffer);
	close_status(f_from);
	close_status(f_to);

	return (0);
}
