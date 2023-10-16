#include "main.h"
/**
 * _strcmp - compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if same
 */
int _strcmp(char *s1, char *s2)
{
	int len;

	len = 0;
	while ((s1[len] != '\0') && (s2[len] != '\0'))
	{
		if (s1[len] != s2[len])
			return (s1[len] - s2[len]);
		len++;
	}

	return (0);
}
