#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
	{
		++len;
	}
	int temp;

	temp = 0;
	while (temp < (leng / 2))
	{
		s[temp] = s[len - temp];
		++temp;
	}
}
