#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int n = 1;
	char *end = (char *)&n;

	if (*end == 1)
		return (1);

	return (0);
}
