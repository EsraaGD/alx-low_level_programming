#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings
 * @separator: coma
 * @n: number of strings
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)

{
	char *separo, *sptr;
	unsigned int v;
	va_list valist;

	if (separator == NULL || *separator == 0)
		separo = "";

	else
		separo = (char *) separator;
	va_start(valist, n);

	if (n > 0)
		printf("%s", va_arg(valist, char *));

	for (v = 1; v < n; v++)
	{
		sptr = va_arg(valist, char*);

		if (sptr == NULL)
			sptr = "(nil)";

		printf("%s%s", separo, sptr);
	}

	printf("\n");
	va_end(valist);
}
