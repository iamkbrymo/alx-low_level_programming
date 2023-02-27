#include "main.h"
#include <stdio.h>
/**
 * rev_string - Function that reverses a string
 * @s: validate the character
 */
void rev_string(char *s)
{
	char c;
	int i, len, len1;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len1];
		s[len1--] = c;
	}
}
