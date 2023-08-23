#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input string
 * @src: input string
 * Return: void
**/

char *_strcat(char *dest, char *src)
{
	int d;
	int f;

	d  = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	f = 0;
	while (src[f] != '\0')
	{
		dest[d] = src[f];
		d++;
		f++;
	}

	dest[d] = '\0';
	return (dest);
}
