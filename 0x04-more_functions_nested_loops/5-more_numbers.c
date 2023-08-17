#include "main.h"

/**
 * more_numbers - print 0 to 14, 10 times
 * Return: 0
 */

void more_numbers(void)
{
	int s, r;

	for (s = 1; s <= 10; s++)
	{
		for (r = 0; r <= 14; r++)
		{
			if (r >= 10)
				_putchar('1');
			_putchar(r % 10 + '0');
		}
		_putchar('\n');
	}
}
