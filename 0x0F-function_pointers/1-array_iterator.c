#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - iterates over an array
 * @array: array to iterate over
 * @size: size of the array
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (!array)
		return;
	if (!action)
		return;
	i = 0;

	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
