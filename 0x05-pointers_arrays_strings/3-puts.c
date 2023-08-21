#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to be printed
 * Return: string
 */

void _puts(char *stg)

{
	while (*stg != '\0')
	{
		_putchar(*stg++);
	}
		_putchar('\n');
}
