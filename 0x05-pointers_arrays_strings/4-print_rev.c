#include "main.h"
/**
 * print_rev - returns the length of the argument string
 * @s: input string
 * Return: the lenght of the string
 */
void print_rev(char *s)
{
	int length;

	length = 0;
	while (*(s + length) != '\0')
	{
		++length;
	}
	while (length >= 0)
	{
		_putchar(*(s + length));
		--length;
	}
	_putchar('\n');
}
