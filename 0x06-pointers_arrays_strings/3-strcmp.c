#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (s1[count] == s2[count])
	{
		if (s1[count] == '\0')
		{
			return (0);
		}
		count++;
	}
	return (*s1 - *s2);
}
