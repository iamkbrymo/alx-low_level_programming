#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int a, b, x, y, len, digit;

	a = 0;
	b = 0;
	x = 0;
	y = 0;
	len = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (a < len && y == 0)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			x = x * 10 + digit;
			y = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			y = 0;
		}
		a++;
	}
	if (y == 0)
		return (0);

	return (x);
}
