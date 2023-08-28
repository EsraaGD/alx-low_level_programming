#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 * @d: input
 * @size: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *d, int size)
{
	int n1, n2, h;

	n1 = 0;
	n2 = 0;

	for (h = 0; h < size; h++)
	{
		n1 = n1 + d[h * size + h];
	}
	for (h = size - 1; h >= 0; h--)
	{
		n2 += d[h * size + (size - h - 1)];
	}
	printf("%d, %d\n", n1, n2);
}
