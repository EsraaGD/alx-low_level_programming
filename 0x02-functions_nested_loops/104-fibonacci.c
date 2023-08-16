#include <stdio.h>

/**
 * main - fibonacci
 *
 * Purpose - no hardcode
 *
 * Return: (Success)
 */

int main(void)

{
	unsigned long int f;
	unsigned long int bef = 1;
	unsigned long int aft = 2;
	unsigned long int g = 1000000000;
	unsigned long int bef1;
	unsigned long int bef2;
	unsigned long int aft1;
	unsigned long int aft2;

	printf("%lu", bef);
	for (f = 1; f < 91; f++)
	{
		printf(", %lu", aft);
		aft += bef;
		bef = aft - bef;
	}

	bef1 = (bef / g);
	bef2 = (bef % g);
	aft1 = (aft / g);
	aft2 = (aft % g);
	for (f = 92; f < 99; ++f)

	{
		printf(", %lu", aft1 + (aft2 / g));
		printf("%lu", aft2 % g);
		aft1 = aft1 + bef1;
		bef1 = aft1 - bef1;
		aft2 = aft2 + bef2;
		bef2 = aft2 - bef2;
	}
	printf("\n");
	return (0);
}
