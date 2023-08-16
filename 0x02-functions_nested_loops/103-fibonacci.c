#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)

{
	int v;
	unsigned long int w, x, next, sum;

	w = 1;
	x = 2;
	sum = 0;
	for (v = 1; v <= 33; ++v)
	{
		if (w < 4000000 && (w % 2) == 0)
		{
			sum = sum + w;
		}
		next = w + x;
		w = x;
		x = next;
	}
	printf("%lu\n", sum);
	return (0);
}
