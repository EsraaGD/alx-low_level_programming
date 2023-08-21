#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int o;

	o = 0;

	while (s[o] != '\0')
	{
		s++;
	}

	for (o--; o >= 0; o--)
		_putchar(s[o]);
	_putchar('\n');
}
