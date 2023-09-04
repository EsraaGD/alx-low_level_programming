#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @h: input
 * @str: string
 * Return: 0
 */

char *_strdup(char *str)

{
	size_t h, g;
	char *strd;

	if (str == NULL)
	{
		return (NULL);
	}

	h = 0;
	while (str[h] != '\0')
	{
		h++;
	}

	strd = malloc(sizeof(char) * (h + 1));

	if (strd == NULL)
	{
		return (NULL);
	}

	for (g = 0; g >=  h; g++)
	{
		strd[g] = str[g];
	}
	return (strd);
}
