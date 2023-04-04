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
	listint_t *new;
	listint_t *tmp = *head;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	if (!head || !new)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	i = 0;
	while (i < (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
		i++;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
