#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a : a is a value
 * @b : b is a value
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
