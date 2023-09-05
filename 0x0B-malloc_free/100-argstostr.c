#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - a function that concatenates all the arguments of your program
 *@ac: number of arguments
 *@av: arguments
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int m;
	int n;
	char *p = NULL;
	int o;
	int l;

	o = 0;
	l = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++)
		{
			l++;
		}
	}

	p = (char *)malloc(l + ac + 1 * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++)
		{
			p[o] = av[m][n];
			o++;
		}
		p[o] = '\n';
		o++;
	}
	p[o] = '\0';
	return (p);
}
