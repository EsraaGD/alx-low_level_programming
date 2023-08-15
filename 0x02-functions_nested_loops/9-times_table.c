#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: 0
 */

void times_table(void)
	{
		int d, e, f;


		for (d = 0; d < 10; d++)
		{
			for (e = 0; e < 10; e++)
			{
				f = e * d;
				if (e == 0)
				{
					_putchar(f + '0');
				}


				if (f < 10 && e != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(f + '0');
				} else if (f >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((f / 10) + '0');
					_putchar((f % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}

