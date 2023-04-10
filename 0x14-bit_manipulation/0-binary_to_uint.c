#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result, num, pow, str_len = 0;
	num = 0;
	result = 1;
	pow = 0;

	if (!b)
		return (0);

	while (b[str_len])
		str_len++;

	while (str_len >= 0)
	{
		if (b[str_len] == '0')
			result = 0;

		else if (b[str_len] == '1')
		{
			if (pow == 0)
				result = 1;
			
			for (pow; pow > 0; pow--)
			{
				result *= 2;
			}
		}

		else
			return (0);

		num = num + result;
		str_len--;
		pow++;
	}

	return (num);
}
