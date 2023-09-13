#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a funtion that prints a name.
 * @name: input name.
 * @f: function pointer.
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))

{
	if (f != NULL)
		f(name);
}
