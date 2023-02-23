#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */

void more_numbers(void)
{
	int k, p;

	for (k = 0; k < 10; k++)
	{
		for (p = 0; p <= 14; p++)
		{
			if (p >= 10)
			{
				_putchar((p / 10) + '0');
			}
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
