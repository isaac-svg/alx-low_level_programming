#include "main.h"

int get_sqrt(int n, int i);

/**
 * _sqrt_recursion - computes the sqrt of a number
 * @n: input argument
 * Return: the computed sqrt
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (get_sqrt(n, 0));
}

/**
 * get_sqrt - calculates the natural sqrt of num
 * @num: input argument
 * @c: counter
 * Return: computed sqrt
 */
int get_sqrt(int num, int c)
{
	if (c * c > num)
		return (-1);
	if (c * c == num)
		return(c);
	return (get_sqrt(num, c + 1));
}

