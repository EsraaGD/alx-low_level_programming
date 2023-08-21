#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @p: integer to swap
 * @q: integer to swap
 */
void swap_int(int *p, int *q)
{
	int n;

	n = *p;
	*p = *q;
	*q = n;
}
