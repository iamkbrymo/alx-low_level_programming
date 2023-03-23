#include "variadic_functions.h"

/**
 * sum_them_all -> returns the sum of all its parameters
 * @n: number of arguments passed
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list f;

	va_start(f, n);
	for (i = 0; i < n; i++)
		sum = sum + va_arg(f, int);

	va_end(f);

	return (sum);
}
