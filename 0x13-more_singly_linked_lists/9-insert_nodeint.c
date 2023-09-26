#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head : ptrr to head of  list
 * @idx  : index of the list where the new node will be added
 * @n    : value for the new node to be added
 * Return: pointer to the new node,or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *old = *head;
	unsigned int addnode;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = old;
		*head = new;
		return (new);
	}

	for (addnode = 0; addnode < (idx - 1); addnode++)
	{
		if (old == NULL || old->next == NULL)
			return (NULL);

		old = old->next;
	}

	new->next = old->next;
	old->next = new;

	return (new);
}
