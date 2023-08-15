#include "main.h"

/**
 * Description: Print alphabets 10 times
 *
 * Return: eachtime 0 (Success)
 */

void print_alphabet_x10(void)
{
	char r;
	int s;
	s = 0;

	while (s < 10)

	{
		for (r = 'a'; r <= 'z'; r++)

		{
			_putchar(r);
		}
		_putchar('\n');
		s++;
	}
}
