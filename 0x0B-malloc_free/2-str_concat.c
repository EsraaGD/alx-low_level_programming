#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return:0
 */

char *str_concat(char *s1, char *s2)

{
	char *ptr;
	int w, x, y, z;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (w = 0; s1[w] != '\0'; w++)
		;

	for (x = 0; s2[x] != '\0'; x++)
		;

	x++;

	ptr = malloc(w * sizeof(*s1) + x * sizeof(*s2));
	if (ptr == 0)
		return (NULL);

	for (y = 0, z = 0; y < w + x; y++)
	{
		if (y < w)
			ptr[y] = s1[y];
		else
			ptr[y] = s2[z++];
	}
	return (ptr);
}
