#include "main.h"

/**
 * rev_string - Reverses a string
 * @r: Input string
 * Return: String in reverse
 */

void rev_string(char *r)
{
	char rev = r[0];
	int counter = 0;
	int i;

	while (r[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = r[i];
		r[i] = r[counter];
		r[counter] = rev;
	}
}
