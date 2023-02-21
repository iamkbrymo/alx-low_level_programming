#include "main.h"

/**
 * print_sign - prints if the number is +ive, _ive or zero
 * @n: number being checked
 * Return: 1 if number is greater than zero
 * 0 if number is zero
 * -1 if number is less that zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
