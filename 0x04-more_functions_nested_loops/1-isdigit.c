#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @k:Character to be checked
 * Return: 1 for digits and 0 for letters
 */

int _isdigit(int k)

{
	if (k >= 48 && k<= 57)
	{
		return (1);
	}
	return (0);
}
