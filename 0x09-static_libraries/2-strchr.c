#include "main.h"
/**
 * _strchr - returns a pointer to the first occurence of a character
 * in a string
 * @s: string input
 * @c: search character
 */
char *_strchr(char *s, char c)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] == c)
		{
			return (&s[len]);
		}
		len++;
	}
	return (0);
}
