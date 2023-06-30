#include "main.h"
/**
 * print_number - prints
 * @n: input integer
 * Return: void
 */
void print_number(int n)
{
	int m, tens_count, fin;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
		fin = n * -1;
	}
	else
	{
		m = n;
		fin = n;
	}
	tens_count = 1;
	while (m > 0)
	{
		tens_count *= 10;
		m /= 10;
	}
	while (fin != 0)
	{
		_putchar((fin % tens_count) + '0');
		fin %= tens_count;
		tens_count /= 10;
	}
}
