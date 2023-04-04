#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer to the list
 * @index: index to be deleted
 *
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *tmp = *head;
	unsigned int i;

	if (!*head)
		return (-1);

	i = 0;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < (index - 1))
	{
		if ((*head) == NULL || (*head)->next == NULL)
			return (-1);

		*head = (*head)->next;
	}

	current = (*head)->next;
	(*head)->next = current->next;
	free(current);

	return (1);
}
