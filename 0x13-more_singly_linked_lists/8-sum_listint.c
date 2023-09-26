#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) in listint_t linked list
 * @head : ptr to head of list
 * Return: sum of all the data (n)
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
