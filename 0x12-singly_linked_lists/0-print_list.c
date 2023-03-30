#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all items in a list
 * @h: pointer to list of stucture list_t to print
 *
 * Return: The total nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}

