#include <stdlib.h>
#include "function_pointer.h"

/**
 * int_index -> searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function to compare integers
 *
 * Return: index of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (!array || !cmp || size <= 0)
		return (-1);

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp((*array + i) != 0))
			{
				return (i);
			}
			i++;
		}
	}

}

