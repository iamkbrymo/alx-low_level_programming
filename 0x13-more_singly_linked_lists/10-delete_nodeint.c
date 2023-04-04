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
	listint_t *current = NULL;
	listint_t *tmp = *head;
	unsigned int i = 0;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (i < (index - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (-1);

		tmp = tmp->next;
		i++;
	}

	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}
