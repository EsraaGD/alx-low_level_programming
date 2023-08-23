#include "main.h"
/**
 * _strcmp - compare string values
 * @y1: input value
 * @y2: input value
 *
 * Return: y1[z] - y2[z]
 */
int _strcmp(char *y1, char *y2)
{
	int z;

	z = 0;
	while (y1[z] != '\0' && y2[z] != '\0')
	{
		if (y1[z] != y2[z])
		{
			return (y1[z] - y2[z]);
		}
		z++;
	}
	return (0);
}
