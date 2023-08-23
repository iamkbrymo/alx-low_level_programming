#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: validate the character
 * Return: 0 (Successful)
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
