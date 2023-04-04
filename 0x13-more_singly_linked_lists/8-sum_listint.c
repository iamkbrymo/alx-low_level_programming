#include "lists.h"

/**
 * sum_listint - sums all elements in a list
 * @head: pointer to the list
 *
 * Return: the sum of all integers
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp;

	tmp = head;

	if (!tmp)
		return (0);

	while (tmp)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
