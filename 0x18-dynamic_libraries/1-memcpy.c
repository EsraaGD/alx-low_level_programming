#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory to be stored in
 * @src: memory to be copied from
 * *@n: number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int x = n;

	for (; j < x; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
