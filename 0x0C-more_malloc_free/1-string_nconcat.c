#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * getstrlen - computes the length of a string
 * @s: input string
 * Return: lenghth of string
 */
int getstrlen(char *s)
{
	int j;

	j = 0;
	if (s[0] == '\0')
		return (0);
	while (s[j] != '\0')
		j++;
	return (j);
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
	unsigned int memsize, s1_length, s2_length;
	char *t;
	int j;
	unsigned int i = 0;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";
	
	s1_length = getstrlen(s1);
	s2_length =  getstrlen(s2);
	if (n > s2_length)
	{
		memsize = s1_length + s2_length + 1;
		n = s2_length;
	}
	else
		memsize = s1_length + n + 1;
	t = malloc(sizeof(char) * memsize);
	if (t == NULL)
		return (NULL);

	

	j = 0;
	while (s1[j] != '\0')
	{
		t[j] = s1[j];
		j++;
	}
	

	while (i < n)
	{
		t[j] = s2[i];
		i++;
		j++;
	}
	t[j] = '\0';
	return (t);
}


