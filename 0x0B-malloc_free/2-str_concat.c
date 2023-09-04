#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - a function that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	size_t stg1, stg2, r, v;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	stg1 = 0;
	while (s1[stg1] != '\0')
	{
		stg1++;
	}

	stg2 = 0;
		while (s2[stg2] != '\0')
		{
			stg2++;
		}

	ptr = malloc(sizeof(char) * (stg1 + stg2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (r = 0; r < stg1; r++)
	{
		ptr[r] = s2[r];
	}
	for (v = 0; v <= stg2; v++)
	{
		ptr[r] = s2[v];
		r++;
	}
	return (ptr);
}
