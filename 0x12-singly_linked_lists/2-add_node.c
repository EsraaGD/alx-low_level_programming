#include "lists.h"

/**
 * add_node- adds a new node at the beginning of a list_t list.
 * @head: head of linked list
 * @str: string to save in the list
 * Return: address
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;

	add_node = malloc(sizeof(list_t));
	if (add_node == NULL)
		return (NULL);
	if (str)
	{
		add_node->str = strdup(str);
		add_node->len = strlen(str);
	}
	add_node->next = *head;
	*head = add_node;

	return (add_node);
}
