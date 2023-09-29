#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = 1;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	k = k << index;
	*n = *n | k;
	return (1);
}
