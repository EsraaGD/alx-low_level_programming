#include "lists.h"

/**
 * free_listint - free a list
 *@head: head of LL
 *Return: 0
 */

void free_listint(listint_t *head)
{

	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
