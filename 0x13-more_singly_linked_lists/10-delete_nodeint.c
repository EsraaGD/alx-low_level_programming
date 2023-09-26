#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a listin_t link list
 * @head: pointer to head of the list
 * @index: index of node that should be delted
 * Return: pointer to the index node or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del;
	unsigned int k;

	if (head == NULL || *head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		del = tmp;
		tmp = tmp->next;
		*head = tmp;
		free(del);
		return (1);
	}
	for (k = 0; k < index - 1; k++)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	del = tmp->next;
	tmp->next = tmp->next->next;
	free(del);
	return (1);
}
