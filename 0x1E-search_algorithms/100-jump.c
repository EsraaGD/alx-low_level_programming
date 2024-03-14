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
	int step = sqrt(size), start = 0, end = start + step, i;

	if (!array || size == 0)
		return (-1);

	for (; start < (int)size; end += step, start += step)
	{
		printf("Value checked array[%d] = [%d]\n", start, array[start]);

		if (end >= (int)size || array[end] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", start, end);
			if (end >= (int)size)
				end = size - 1;
			for (i = start; i <= end; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			break;
		}
	}

	if (start >= (int)size || array[start] > value)
	{
		printf("Value not present in array\n");
		return (-1);
	}

	return (-1);
}
