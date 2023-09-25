#include "lists.h"

/**
 * *add_nodeint- adds a new node at the beginning of a list_t list.
 * @head: head of linked list
 * @n: string to save in the list
 * Return: address
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_nodeint;

	add_nodeint = malloc(sizeof(listint_t));
	if (!head || !add_nodeint)
		return (NULL);

	add_nodeint->n = n;
	add_nodeint->next = *head;
	*head = add_nodeint;

	return (add_nodeint);
}
