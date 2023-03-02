#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array of numbers
 * @n: number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int count, count1, tmp;

	count1 = n - 1;

	for (count = 0; count < n / 2; count++)
	{
		tmp = a[count];
		a[count] = a[count1];
		a[count1--] = tmp;
	}
}
