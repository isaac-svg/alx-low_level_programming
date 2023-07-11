#include "main.h"
#include <stdlib.h>

/**
 * str_concat - alloates memory and concatenates strings
 * @s1: base string
 * @s2: super string
 * Return: pointer to char
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, k, l;
	char *t;
	
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	t = malloc(sizeof(char) * (i + j + 1));
	if (t == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		t[k] = s1[k];
	for (l = 0; l < j; l++)
		t[i + l] = s2[l];
	return (t);
}

