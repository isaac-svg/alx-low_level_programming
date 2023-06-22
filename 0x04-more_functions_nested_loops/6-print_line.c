#include "main.h"

/**
 * print_line prints straight lines.
 * @n: number of lines to be printed.
 * Return: void .
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('/n);
	}
	else
	{
		while (n)
		{
			_putchar('_');
			n--;
		}
	}
}
