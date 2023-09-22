#include <stdio.h>

/**
 * b4main - execute function before main function
 * Return: 0
 */

void __attribute__ ((constructor)) b4main()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
