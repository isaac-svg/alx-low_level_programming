#include "main.h"
/**
 * _strlen_recursion - returns the length of a string recursively
 * @s: input string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int len;
	
	len = 0;
	if (*s)
	{
		len++;
		_strlen_recursion(s + 1);
	}
}
