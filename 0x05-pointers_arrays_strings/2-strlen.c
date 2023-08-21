#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @l: string
 * Return:lenght
 */

int _strlen(char *l)
{
	int longi = 0;

	while (*l != '\0')
	{
		longi++;
		l++;
	}

	return (longi);
}
