#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @q: input
 * Return: length of list.
 */

size_t list_len(const list_t *q)

{
	size_t linkylinks;

	linkylinks = 0;
	while (q != NULL)
	{
		q = q->next;
		linkylinks++;
	}
	return (linkylinks);
}
