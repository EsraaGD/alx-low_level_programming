#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: comma
 * @n: input
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)

{
	char *separo;
	unsigned int num;
	va_list valist;

	if (separator == NULL || *separator == 0)
		separo = "";

	else
		separo = (char *) separator;
	va_start(valist, n);


	if (n > 0)
		printf("%d", va_arg(valist, int));

	for (num = 1; num < n; num++)
		printf("%s%d", separo, va_arg(valist, unsigned int));

	printf("\n");

	va_end(valist);
}
