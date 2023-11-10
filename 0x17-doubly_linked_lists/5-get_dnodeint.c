#include "lists.h"

/**
 * *get_dnodeint_at_index -  returns the nth node of a DLL
 * @head: fgh
 * @index: hjg
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}

	return (count == index) ? head : NULL;
}
