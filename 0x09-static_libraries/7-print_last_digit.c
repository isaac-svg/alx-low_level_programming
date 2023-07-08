#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: input paramter
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	int rem;

	if (n < 0)
		n = -n;
	rem = n % 10;
	if (rem < 0)
		rem = -rem;
	_putchar('0' + rem);
	return (rem);
}
