#include "main.h"

/**
 * rot13 - encodes a string into 1337
 * @s: string to modify
 * Return: returns encoded string.
 */
char *rot13(char *s)
{
	int a, b;

	char *c = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *d = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	a = 0;

	while (s[a] != '\0')
	{
		b = 0;

		while (b < 52)
		{
			if (s[a] == c[b])
			{
				s[a] = d[b];
				break;
			}
			b++;
		}
		a++;
	}
	return (s);
}
