#include "main.h"
/**
 * print_most_numbers - prints digits without 2 and 4.
 * Return: void
 */
void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if (i != 52)
		{
			if (i != 50)
			{
				_putchar(i);
			}
		}
	}
	_putchar('\n');
}
