#include "main.h"
#include <stdio.h>
/**
* _puts_recursion - prints the characters of a string
* @s: pointer to input string
* Return: void
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		putchar('\n');
	}

}
