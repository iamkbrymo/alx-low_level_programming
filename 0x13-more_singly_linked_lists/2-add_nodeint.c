#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning
 * of a listint_t list.
 * @head: pointer to the head of a linked list
 * @n: Int to add to list
 *
 * Return: pointer to the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
