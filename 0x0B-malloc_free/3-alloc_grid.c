#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: input
 * @height: input
 * Return: 0
 */

int **alloc_grid(int width, int height)
	{

	int **tda;
	int k, j;

	if (width < 1)
		return (NULL);

	if (height < 1)
		return (NULL);

	tda = malloc(height * sizeof(int *));

	if (tda == 0)
		return (NULL);

	for (k = 0; k < height; k++)
	{
		tda[k] = malloc(width * sizeof(int));

		if (tda[k] == 0)
		{
			for (j = 0; j < k; j++)
				free(tda[j]);
			free(tda);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			tda[k][j] = 0;
	}
	return (tda);
}
