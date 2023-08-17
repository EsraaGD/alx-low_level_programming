#include "main.h"

/**
 * print_triangle - prints a triangle size size
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)

{
	int left, right, bottom;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (left = 1; left <= size; left++)
		{
			for (bottom = size - left; bottom >= 1; bottom--)
			{
				_putchar(' ');
			}
			for (right = 1; right <= left; right++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
