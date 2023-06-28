#include "main.h"
/**
 * _atoi - functuons same as the built in atoi
 * @s: input string
 * Return: 0 if the string has no int else 
 * the digit is returned
 */
int _atoi(char *s)
{
	int result, len, diglen, ispos, sign, hasdigit;

	len = 0;
	sign = 1;
	while (*(s + len) != '\0')
	{
		if (*(s + len) >= '0' && *(s + len) <= '9')
		{
			if (*(s + len - 1) == '-')
			{	sign = -1;
				ispos = 0;
			}
			hasdigit = 1;
			diglen = 0;
			while (*(s + diglen) >= '0' && *(s + diglen) <= '9')
			{
				result = (result * 10) + (*(s + diglen) - '0');
				++diglen;
			}
		}
		++len;
	}
	if (!hasdigit)
	{
		return (0);
	}
	return (result * sign);
}
