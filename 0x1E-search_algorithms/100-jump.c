#include "search_algos.h"

/**
 * jump_search - searches for a value in an array of integers using BSA
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located, or -1 if value is not
 * present in array or if array is NULL
 */

int jump_search(int *array, size_t size, int value)
{
	int step;
	int prev = 0;
	int i;

	if (array == NULL || size == 0)
		return -1;

	step = (int)sqrt((double)size);

	while (array[prev] < value)
	{
		int current = prev + step;
		if ((size_t)current >= size)
			current = size - 1;

		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[current] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", prev, current);
			for (i = prev; i <= current; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return i;
			}
			return -1;
		}

		prev += step;
		if ((size_t)prev >= size)
			break;
	}

	return -1;
}
