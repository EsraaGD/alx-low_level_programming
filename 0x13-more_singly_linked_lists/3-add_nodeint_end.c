#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list_t list.
 * @head: head of the LL
 * @n: string to save in LL
 * Return: address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	old = *head;
	while (old->next)
		old = old->next;
	old->next = new;
	return (new);
}
