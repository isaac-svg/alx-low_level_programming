#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int len, temp;

	len = 0;
	while (*(s + len) != '\0')
	{
		++len;
	}
	temp = 0;
	while (temp < (len / 2))
	{
		s[temp] = s[len - temp];
		++temp;
	}
}
