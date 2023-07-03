#include "main.h"
/**
 * _memset - copies n number of constant bytebinto memory
 * @s: pointer to area of memory
 * @b: the constant byte argument
 * @n: length of byte
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int len;
	
	len = 0;
	for (; n > 0; len++)
	{
		s[len] = b;
		n--;
	}
	return (s);
}
