#include "main.h"
/**
 * string_toupper - change all lowercase to uppercase
 * @p: pointer
 *
 * Return: p
 */
char *string_toupper(char *p)
{
	int e;

	e = 0;
	while (p[e] != '\0')
	{
		if (p[e] >= 'a' && p[e] <= 'z')
			p[e] = p[e] - 32;
		e++;
	}
	return (p);
}
