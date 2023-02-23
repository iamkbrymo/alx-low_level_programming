#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 */

void print_most_numbers(void)
{
	int k = 0;

	while (k <= 9)
	{
		if (k != 2 && k != 4)
		{
			_putchar(k + '0');
		}
		k++;
	}
	_putchar('\n');
}
