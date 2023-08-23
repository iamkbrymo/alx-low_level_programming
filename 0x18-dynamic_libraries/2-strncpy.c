#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 * Return: a string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}

	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}
