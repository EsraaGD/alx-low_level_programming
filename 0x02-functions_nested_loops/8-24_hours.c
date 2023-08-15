#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: No return
 */

void jack_bauer(void)

{
		int k, j;


		k = 0;


		while (k < 24)
		{
			j = 0;
			while (j < 60)
			{
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
				_putchar(':');
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
				_putchar('\n');
				j++;
			}
			k++;
		}
	}

