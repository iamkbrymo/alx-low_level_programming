#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @h: the number
 * Return: value of the last digit
 */
int print_last_digit(int h)
{
	int ha = h % 10;

	if (ha < 0)
	{
		ha = -(ha);
	}

	_putchar(ha + '0');

	return (ha);
}
