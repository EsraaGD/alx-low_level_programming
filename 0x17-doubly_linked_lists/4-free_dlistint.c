#include "lists.h"

/**
 * free_dlistint - a function that frees a dlistint_t list
 * @head: pointer
 * Return: NULL
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
