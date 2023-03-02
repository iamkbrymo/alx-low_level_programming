#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to modify
 * Return: returns encoded string.
 */
char *leet(char *s)
{
	int a, b;

	char *c = "aAeEoOtTlL";
	char *d = "4433007711";

	a = 0;

	while (s[a] != '\0')
	{
		b = 0;

		while (b < 10)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
			}
			b++;
		}
		a++;
	}
	return (s);
}
