#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the list
 * @idx: index of the node
 * @n: number to add
 *
 * Return: Address to the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i = 0;

	tmp = head;

	new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (tmp && i < idx)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
			tmp = tmp->next;

		i++;
	}
	return (NULL);
}
