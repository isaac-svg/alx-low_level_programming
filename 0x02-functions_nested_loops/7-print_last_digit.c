#include "main.h"

/**
 * print_last_digit -  prints the last digit of a number
 * @n: input paramter
 * Return: last digit of n
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = -n;
	_putchar('0' + n % 10);
	return (n % 10);
}
