#include "main.h"
/**
 * _puts - prints string onto the standars output
 * @str: input string
 * Return: void
 */
void _puts(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		_putchar(*(str + len));
		len++;
	}
}
