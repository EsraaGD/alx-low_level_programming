#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @q: Number of times
 * Return: 0
 */

void print_line(int q)
{
	int p;

	for (p = 0; p < q; p++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
