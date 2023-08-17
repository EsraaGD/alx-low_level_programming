#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: Number of times
 * Return: 0
 */

void print_diagonal(int c)

{
	int d, e;

	if (c <= 0)
		_putchar('\n');
	for (d = 0; d < c; d++)
	{
		for (e = 0 ; e < d; e++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
