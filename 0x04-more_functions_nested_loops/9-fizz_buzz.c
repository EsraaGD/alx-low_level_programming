#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: Prints the number 1 to 100
 * Fizz for muliples of 3 and Buzz for multiples of 5,
 * And FizzBuzz for multiples of both
 *
 * Return: 0
 */

int main(void)
{
	int q;

	for (q = 1; q <= 100; q++)
	{
		if (q % 15 == 0)
			printf("FizzBuzz");
		else if (q % 3 == 0)
			printf("Fizz");
		else if (q % 5 == 0)
			printf("Buzz");
		else
			printf("%d", q);
		if (q < 100)
			printf(" ");
	}
	printf("\n");

	return (0);
}
