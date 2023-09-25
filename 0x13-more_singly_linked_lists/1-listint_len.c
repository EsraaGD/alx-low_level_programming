#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list_t list.
 * @q: input
 * Return: length of list.
 */

size_t listint_len(const listint_t *q)

{
	size_t linkylinks;

	linkylinks = 0;
	while (q)
	{
		q = q->next;
		linkylinks++;
	}
	return (linkylinks);
}
