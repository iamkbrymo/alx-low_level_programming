#include "lists.h"

/**
 * get_nodeint_at_index - prints the index of the last node
 * @head: pointer to the first node
 * @index: index of the current node.
 *
 * Return: the index on the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	tmp = head;

	while (tmp->next && i <= index)
	{
		tmp = tmp->next;
		i++;
	}

	return (tmp);
}
