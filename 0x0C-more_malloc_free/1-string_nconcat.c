#include "main.h"
#include <stdlib.h>

/**
 * getstrlen - computes the length of a string
 * @s: input string
 * Return: lenghth of string
 */
int getstrlen(char *s)
{
	int j;

	j = 0;
	if (s == "")
		return (0);
	while (s[j] != '\0')
		j++;
	return (0);
}

/**
 * string_nconcat - concats two strings
 * @s1: base string
 * @s2: from string
 * @n: the length of string from s2 to take
 * Return: pointer to the memory location
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int memsize, s1_length, s2_length;
	char *t;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	
	s1_length = getstrlen(s1);
	s2_length =  getstrlen(s2);
	if (n > s2_length)
	{
		memsize = s1_length + s2_length;
		n = s2_length;
	}
	else
		memsize = s1_length + n;
	t = malloc(sizeof(char) * memsize);
	if (t == NULL)
		return (NULL);

	int j;

	j = 0;
	while (s1[j] != '\0')
	{
		t[j] = s1[j];
		j++;
	}
	++j;
	int i = 0;

	while (i < n)
	{
		t[j + i] = s2[i];
		i++;
		j++;
	}
	t[j + 1] = '\0';
	return (t);
}


