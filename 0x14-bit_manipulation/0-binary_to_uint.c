#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: pointer to string
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)

{
	unsigned int convert = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{

		if (*b == '0' || *b == '1')
		{
			convert = (convert << 1) | (*b - '0');
			b++;
		}
		else
		{
			return (0);
		}
	}
	return (convert);
}
