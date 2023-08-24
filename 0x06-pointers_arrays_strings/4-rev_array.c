#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @r: array
 * @s: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *r, int s)
{
	int t;
	int u;

	for (t = 0; t < s--; t++)
	{
		u = r[t];
		r[t] = r[s];
		r[s] = u;
	}
}
