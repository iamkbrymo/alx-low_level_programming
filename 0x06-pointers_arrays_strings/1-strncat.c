#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int count;
	int count1;

	count = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	count1 = 0;

	while (src[count1] != '\0' && count1 < n)
	{
		dest[count] = src[count1];
		count++;
		count1++;
	}

	dest[count] = '\0';

	return (dest);
}
