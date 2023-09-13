#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - a funtion that prints a name.
 * @name: input name.
 * @f: function pointer.
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))

{
	if (name != NULL && f != NULL)
		(*f)(name);
}
