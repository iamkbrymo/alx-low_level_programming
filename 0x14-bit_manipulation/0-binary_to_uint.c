#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string to convert
 * Return: number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int exp, len = 0;

	if (!b)
		return (0);

	while (b[len] != 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		len++;
	}
	for (exp = 1, num = 0, len--; len >= 0; len--, exp = exp * 2)
	{
		if (b[len] == '1')
			num = num + exp;
	}

	return (num);
}
