#include "main.h"

/**
 * print_square - prints a sqaure of size size
 * @size: size of sqaure
 * Return: 0
 */

void print_square(int size)
{
	int f, h;

	if (size <= 0)
		_putchar('\n');

	for (f = 0; f < size; f++)
	{
		for (h = 0; h < (size); h++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
