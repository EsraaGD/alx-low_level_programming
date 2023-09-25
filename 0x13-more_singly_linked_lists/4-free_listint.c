#include "lists.h"

/**
 * free_listint - free a list
 *@head: head of LL
 *Return: 0
 */

void free_listint(listint_t *head)
{

	if (head)
	{
		free_listint(head->next);

		{
			if (head->next)
				free(head);
		}
	}
}
