#include "lists.h"

/**
 * add_node - adds a new node at the end of list
 * @head: head of LL
 * @str: string to save in LL
 * Return: address of head
 */

list_t *add_node(list_t **head, const char *str)
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

	if (old== NULL)
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
