#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: args
 * Return: Sum
 */

int sum_them_all(const unsigned int n, ...)

{
	va_list valists;
	unsigned int qr;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valists, n);

	for (qr = 0; qr < n; qr++)
		sum += va_arg(valists, unsigned int);

	va_end(valists);

	return (sum);
}
