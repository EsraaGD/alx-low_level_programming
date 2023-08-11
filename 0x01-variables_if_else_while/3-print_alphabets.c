#include <stdio.h>

/**
 * main - entry point
 * Return: eachtime 0 (Success)
 */

int main(void)
{
	char f;

	char g;

	f = 'a';
	g = 'A';

	for (f = 'a' ; f <= 'z' ; f++)
	{putchar (f); }

	for (g = 'A' ; g <= 'Z' ; g++)
	{putchar (g); }

	{putchar ('\n'); }
	return (0);
}
