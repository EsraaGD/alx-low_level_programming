#include "main.h"
#include <stdlib.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: min value.
 * @max: max value.
 * Return: pointer to the newly created array.
 * if man > mix, returns NULL.
 * if malloc fails, returns NULL.
 */

int *array_range(int min, int max)

{
	int *arr;
	int m;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(*arr) * ((max - min) + 1));

	if (arr == NULL)
		return (NULL);

	for (m = 0; min <= max; m++, min++)
		arr[m] = min;

	return (arr);
}
