#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 * Return: eachtime (0)
 */

void print_numbers(void)
{
	char q;

	for (q = '0'; q <= '9'; q++)
	{
		_putchar(q);
	}
	_putchar('\n');
}
