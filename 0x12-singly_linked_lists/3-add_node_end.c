#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: head of the LL
 * @str: string to save in LL
 * Return: address
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *old;
	size_t linkylink;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (linkylink = 0; str[linkylink]; linkylink++)
		;

	new->len = linkylink;
	new->next = NULL;
	old = *head;

	if (old == NULL)
	{
		*head = new;
	}
	else
	{
		while (old->next != NULL)
			old = old->next;
		old->next = new;
	}

	return (*head);
}
