#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @b: Character to be checked
 * Return: 1 for uppercase and 0 for lowercase
 */

int _isupper(int b)

{
	if (b >= 65 && b <= 90)
	{
		return (1);
	}
	return (0);
}
