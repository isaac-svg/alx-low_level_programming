#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input string
 * Return: void
 */
void rev_string(char *s)
{
	int len, index;
	char *temp, placeholder;

	len = 0;
	temp = s;
	while (*(s + len) != '\0')
	{
		++len;
	}
	index  = 0;
	len -= 1;
	while (index < (len / 2))
	{
		placeholder = *(s + index);
		*(s + index) = *(temp + len - index - 1);
		*(s + len - index) = placeholder;
		index++;
	}
}
