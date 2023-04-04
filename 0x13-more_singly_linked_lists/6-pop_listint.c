#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: pointer to the header
 *
 * Return: int
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

	if (!*head)
		return (0);

	new = *head->next;
	n = *head->n;
	free(*head);
	*head = new;

	return (n);
}
