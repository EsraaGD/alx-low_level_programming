#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: Character to be checked
 * Return: 1 for letter,lowercase or uppercase character or 0 for the rest
 */

int _isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))

	{
	return (1);
	}

	return (0);
}
