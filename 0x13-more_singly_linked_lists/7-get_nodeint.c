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
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
