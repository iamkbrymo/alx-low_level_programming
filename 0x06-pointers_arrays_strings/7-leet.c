#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to modify
 * Return: returns encoded string.
 */
char *leet(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (s[i] == 'a')
				s[i] = s[i] - 45;
			else if (s[i] == 'e')
				s[i] = s[i] - 50;
			else if (s[i] == 'o')
				s[i] = s[i] - 63;
			else if (s[i] == 't')
				s[i] = s[i] - 61;
			else if (s[i] == 'l')
				s[i] = s[i] - 59;
		}
		i++;
	}

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if (s[i] == 'A')
				s[i] = s[i] - 13;
			else if (s[i] == 'E')
				s[i] = s[i] - 18;
			else if (s[i] == 'O')
				s[i] = s[i] - 31;
			else if (s[i] == 'T')
				s[i] = s[i] - 29;
			else if (s[i] == 'L')
				s[i] = s[i] - 27;
		}
		i++;
	}
	return (s);
}
