#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: a pointer to the first node where value is located, or NULL if value
 * is not present in list or if head is NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (list == NULL)
		return (NULL);

	current = list;
	express = list->express;

	while (express != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);
		if (express->n >= value || express->express == NULL)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					current->index, express->index);
			while (current != NULL && current->index <= express->index)
			{
				printf("Value checked at index [%lu] = [%d]\n",
						current->index, current->n);
				if (current->n == value)
					return (current);
				current = current->next;
			}
			break;
		}
		current = express;
		express = express->express;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			current->index, current->index);
	while (current != NULL)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}

	return (NULL);
}
