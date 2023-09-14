#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything.
 * c = char, i = int, f = float, s = char *
 * (if null print (nil))
 * @format: list of types of arguments passed to the function
 * Return: 0
 */

void print_all(const char * const format, ...)

{
	va_list valist;
	int n = 0, h = 0;
	char *separo = ", ";
	char *string;

	va_start(valist, format);

	while (format && format[h])
		h++;
	while (format && format[n])
	{
		if (n  == (h - 1))
		{
			separo = "";
		}
		switch (format[n])
		{
		case 'c':
			printf("%c%s", va_arg(valist, int), separo);
			break;
		case 'i':
			printf("%d%s", va_arg(valist, int), separo);
			break;
		case 'f':
			printf("%f%s", va_arg(valist, double), separo);
			break;
		case 's':
			string = va_arg(valist, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s%s", string, separo);
			break;
		}
		n++;
	}
	printf("\n");
	va_end(valist);
}
