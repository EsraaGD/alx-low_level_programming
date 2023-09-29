#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: number
 * @m: number
 * Return: flipped number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flippter;
	unsigned int count = 0;

	flippter = n ^ m;
	while (flippter)
	{
		count++;
		flippter &= (flippter - 1);
	}
	return (count);
}
