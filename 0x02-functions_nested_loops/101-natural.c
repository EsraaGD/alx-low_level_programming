#include <stdio.h>

/**
 * main - Lists all the natural numbers below 1024 (excluded)
 * that are multiples of 3 or 5.
 * Return: eachtime 0 (Success)
 */

int main(void)
{
	int o, sum = 0;


	for (o = 0; o < 1024; o++)
	{
		if ((o % 3) == 0 || (o % 5) == 0)
			sum += o;
	}

	printf("%d\n", sum);

	return (0);
}
