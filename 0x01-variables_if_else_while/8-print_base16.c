#include <stdio.h>

/**
 * main - entry point
 * Return: eachtime 0 (Success)
 */

int main(void)
{
	int y;

	for (y = 0; y < 10; y++)
	{
		putchar(y + '0');
	}
	
	char z = 'a';
	while (z <= 'f')
	{
		putchar(z);
		z++;
	}

	putchar('\n');

	return (0);
}
