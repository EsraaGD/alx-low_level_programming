#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0
 */

int main(void)

{
	unsigned long int r, q = 612852475143;

	for (r = 3; r < 782849; r = r + 2)
	{
		while ((q % r == 0) && (q != r))
			q = q / r;
	}
	printf("%lu\n", q);

	return (0);
}
