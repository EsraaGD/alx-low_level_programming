#include <stdio.h>

/**
 * main - all except q and e
 * Return: eachtime 0 (Success)
 */
int main(void)
{
	char h;

	for (h = 'a'; h <= 'z'; h++)
	{
		if (h != 'q' && h != 'e')
		{
			putchar(h);
		}
	}

	putchar ('\n');

	return (0);
}
