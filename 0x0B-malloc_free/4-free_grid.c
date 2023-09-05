#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function
 * @height: freeing
 * @grid: input
 * Return: 0
 */

void free_grid(int **grid, int height)

{
	int e;

	for (e = 0; e < height; e++)
		free(grid[e]);
	free(grid);
}
