#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * and initializes it with a specific char
 * @p:input
 * @c: string of characters
 * Return: 0
 */

char *create_array(unsigned int p, char c)

{
	size_t u;
	char *ptr;

		if (p == 0)
		{
			return (NULL);
		}
	ptr = malloc(sizeof(char) * p);
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (u = 0; u < p; u++)
	{
		ptr[u] = c;
	}
	return (ptr);
}
