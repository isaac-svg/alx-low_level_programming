#include "main.h"
/**
 * _strlen - returns the length of the argument string
 * @s: input string
 * Return: the lenght of the string
 */
int _strlen(char *s)
{
	int length;
	
	length = 0;
	while (*(s + lenght) != '\0')
	{
		++length;
	}
	return (lenght);
}
