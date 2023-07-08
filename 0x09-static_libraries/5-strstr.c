#include "main.h"
/**
 * _strstr - locates substring
 * @haystack: longer word
 * @needle: shorter word
 * Return: char *
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *haycpy = haystack;
		char *needcpy = needle;

		while (*haycpy == *needcpy && *needcpy != '\0')
		{
			needcpy++;
			haycpy++;
		}
		if (*needcpy == '\0')
		{
			return (haystack);
		}
	}
	return ('\0');
}
