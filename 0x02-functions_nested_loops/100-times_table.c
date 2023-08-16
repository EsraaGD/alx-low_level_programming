#include "main.h"

/**
 * print_times_table - prints the w times table, starting with 0
 * @w: number of times table
 */

void print_times_table(int w)
{
	int p,q,r;

	if (w >= 0 && w <= 15)
	{
		for (p = 0; p <= w; p++)
		{
			for (q = 0; q <= w; q++)
			{
				r = q * p;
				if (q == 0)
				{
					_putchar(r + '0');
				}
				else if (r < 10  && q != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(r + '0');
				}
				else if (r >= 10 && r < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
