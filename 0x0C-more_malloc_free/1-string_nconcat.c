#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * @n: amount of bytes.
 * Return: pointer to the allocated memory.
 * if malloc fails, status value is equal to 98.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *link;
	unsigned int ls1, ls2, llink, t;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (ls1 = 0; s1[ls1] != '\0'; ls1++)
		;

	for (ls2 = 0; s2[ls2] != '\0'; ls2++)
		;

	if (n > ls2)
		n = ls2;

	llink = ls1 + n;

	link = malloc(llink + 1);

	if (link == NULL)
		return (NULL);

	for (t = 0; t < llink; t++)
		if (t < ls1)
			link[t] = s1[t];
		else
			link[t] = s2[t - ls1];

	link[t] = '\0';

	return (link);
}
