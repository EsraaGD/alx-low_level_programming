#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Number to print from
 * Return: eachtime 0 (Success)
 */

void print_to_98(int a)

{
	if (a <= 98)
	{
		for (; a <= 98; a++)
		{
			if (a == 98)
			{
				printf("%d", a);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", a);
			}
		}
	}
	else
	{
		for (; a >= 98; a--)
		{
			if (a == 98)
			{
				printf("%d", a);
				printf("\n");
				break;
			}
			else
			{
				printf("%d, ", a);
			}
		}
	}
}
