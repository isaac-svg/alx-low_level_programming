#include "main.h"
/**
 * _pow_recursion - returns a number to a power
 * @x: base
 * @y: exponent
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, (y -1));
}

