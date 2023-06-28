#include "main.h"
/**
 * puts_half - prints characters to length / 2
 * @str: input stting
 * Return: void
 */
void puts_half(char *str)
{
	int len, i, j;

	len = 0;
	while (*(str + len) != '\0')
		++len;
	i = len % 2;
	if (i == 0)
	{
		for (j = (len / 2); j < len; j++)
		{
			_putchar(*(str + j));
		}
	}
	else
	{
		for (j = (len / 2); j < len; j++)
		{
			_putchar(*(str + j));
		}
	}
	_putchar('\n');
}
