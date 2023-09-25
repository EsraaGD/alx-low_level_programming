#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @d: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_listint(const listint_t *d)
{
	size_t linkylinks = 0;

	while (d)
	{
		printf("%d\n", d->n);
		linkylinks++;
		d = d->next;
	}
	return (linkylinks);
}
