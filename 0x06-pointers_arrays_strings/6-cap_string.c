#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: string to capitalize
 * Return: char
 */

char *cap_string(char *s)
{
	int count, count1;

	char spec[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	count = 0;
	while (s[count] != '\0')
	{
		if (count == 0 && s[count] >= 'a' && s[count] <= 'z')
		{
			s[count] = s[count] - 32;
		}

		for (count1 = 0; count1 < 13; count1++)
		{
			if (s[count] == spec[count1])
			{
				if (s[count + 1] >= 'a' && s[count + 1] <= 'z')
				{
					s[count + 1] = s[count + 1] - 32;
				}
			}
		}
		count++;
	}
	return (s);
}
