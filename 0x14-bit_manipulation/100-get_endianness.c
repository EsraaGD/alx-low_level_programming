#include "main.h"

/**
 * get_endianness - a function that checks the endianness.
 * Return: 0 if bif endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int m = 1;
	char *r = (char *) &m;

	if (*r)
		return (1);
	else
		return (0);
}
