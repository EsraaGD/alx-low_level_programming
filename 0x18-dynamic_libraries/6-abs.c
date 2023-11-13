#include "main.h"

/**
 *_abs - computes the absolute value of an integer
 *@g: Number to be computed
 *Return: Absolute value
 */

int _abs(int g)

{
	if (g >= 0)
	{
		return (g);
	}
	else
	{
		return (g * -1);
	}
}
