#include "main.h"

/**
 * puts_half - Prints half of a string,
 * followed by a new line
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int len, i, j;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (j = len / 2; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	else if (len % 2)
	{
		for (i = (len - 1) / 2; i < len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
