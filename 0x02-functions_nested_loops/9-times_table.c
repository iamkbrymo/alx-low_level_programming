#include "main.h"

/**
 * times_table - prints a 9 times table
 */
void times_table(void)
{
	int num = 0, multi, prod;

	while (num <= 9)
	{
		_putchar('0');
		multi = 1;

		while (multi <= 9)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multi;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');

			multi++;
		}
		_putchar('\n');
		num++;
	}
}
