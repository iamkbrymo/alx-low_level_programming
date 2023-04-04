#include "lists.h"

/**
 * print_listint - prints all the elements of a list.
 * @h: pointer to a linked list
 *
 * Return: the number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t s;

	s = 0;
	while (h)
	{
		if (h->n)
			printf("%d\n", h->n);
		h = h->next;
		s++;
	}
	return (s);
}
