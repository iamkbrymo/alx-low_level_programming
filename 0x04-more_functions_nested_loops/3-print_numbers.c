#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 */

void print_numbers(void)
{
	char z = '0';

	while (z <= '9')
	{
		_putchar(z);
		z++;
	}

	_putchar('\n');
}
