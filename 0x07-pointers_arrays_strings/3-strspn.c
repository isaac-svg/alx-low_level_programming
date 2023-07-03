#include "maim.h"
/**
 * _strspn - retyrns the number of bytes in the initial 
 * segment
 * @s: source
 * @accept: compare
 * Return: byte size
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int m;

	while (*s)
	{
		n = 0;
		for (m = 0; accept[m]; m++)
		{
			if (*s == accept[m])
			{
				n++;
				break;
			}
			else if (accept[m + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}

