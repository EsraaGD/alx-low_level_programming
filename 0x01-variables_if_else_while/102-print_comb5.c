#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int w, x;

	for (w = 0; w < 100; w++)
	{
		for (x = 0; x < 100; x++)
		{
			if (w < x)
			{
				putchar((w / 10) + 48);
				putchar((w % 10) + 48);
				putchar(' ');
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				if (w != 98 || x != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
