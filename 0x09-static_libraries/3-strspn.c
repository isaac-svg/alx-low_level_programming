#include "main.h"
/**
 * _strspn - returns the number of bytes in the initial 
 * segment
 * @s: source
 * @accept: compare
 * Return: byte size
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int m, j;

	j = 0;
	n = 0;
	while (*(s + j) != '\0')
	{
		for (m = 0; accept[m]; m++)
		{
			if (*(s + j)  == accept[m])
			{
				n++;
				break;
			}
			else if (accept[m + 1] == '\0')
			{
				return (n);
			}
		}
		j++;
	}
	return (n);
}

