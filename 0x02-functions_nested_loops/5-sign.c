#include "main.h"

/**
 * print_sign - prints the sign of an integer
 * @n: input integer
 * Return: 1 if postive 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}	
	_putchar('0');
	return ('0');
}
