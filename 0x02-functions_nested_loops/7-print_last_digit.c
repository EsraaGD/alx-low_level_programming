#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @h:Number to be checked
 * Return: Value of last digit
 */

int print_last_digit(int h)

{
	int g;

	g = h % 10;
	if (g < 0)
	{ 
		g = g * -1;
	}
	_putchar(g + '0');
	return (g);
}
