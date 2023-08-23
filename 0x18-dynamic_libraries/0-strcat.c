#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int count;
	int count1;

	count = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	count1 = 0;

	while (src[count1] != '\0')
	{
		dest[count] = src[count1];
		count++;
		count1++;
	}
	dest[count] = '\0';

	return (dest);
}
