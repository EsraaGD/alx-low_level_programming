#include "main.h"
#include <stdio.h>

/**
 * get_bit -  function that returns the value of a bit at a given index.
 * @n: number
 * @index: index
 * Return: Value of bit index or -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitbot = 1UL << index;
	int bitVal = (n & bitbot) ? 1 : 0;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return (bitVal);
}
