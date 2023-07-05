#include "main.h"
/**
 * _strpbrk - returns pointer to a character
 * @s: source
 * @accept: comparer
 * Return: pointer to first occurrence 
 */
char *_strpbrk(char *s, char *accept)
{
	int n, acp_len;

	n = 0;
	while (s[n] != '\0')
	{
		for (acp_len = 0; accept[acp_len] != '\0'; acp_len++)
		{
			if (s[n] == accept[acp_len])
			{
				return (&s[n]);
			}
		}
		n++;
	}
	return ('\0');
}


