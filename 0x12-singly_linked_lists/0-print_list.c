#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @d: singly linked list.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *d)
{
	size_t linkylinks;

	linkylinks = 0;
	while (d != NULL)
	{
		if (d->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", d->len, d->str);
		d = d->next;
		linkylinks++;
	}
	return (linkylinks);
}
