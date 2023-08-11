#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
main - entry point
Return: everytime 0 (Success)
*/

int main(void)
{
	int a;
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (a > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	else if (a == 0)
		printf("Last digit of %d is %d and is 0\n", n, a);
	else (a < 6 && a != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	return (0);
}
