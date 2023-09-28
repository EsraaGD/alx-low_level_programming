#include "main.h"
#include <stdio.h>

/**
 * print_binary - a function that prints the binary representation of a number.
 * @n:number to be converted to binary
 *
 * Return: binary representation
 */

void print_binary(unsigned long int n)

{
	if (n > 1)
	{
		print_binary(n >> 1);
	}

	putchar ((n & 1) ? '1' : '0');
}
