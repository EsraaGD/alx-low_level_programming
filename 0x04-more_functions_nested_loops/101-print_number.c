#include "main.h"

/**
 * print_number - prints an integer
 * @h: integer parameter
 * Return: 0
 */

void print_number(int h)

{
	unsigned int m = h;

	if (h < 0)
	{
		_putchar(45);
		m = -m;
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar(m % 10 + '0');
}
