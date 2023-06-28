#include "main.h"
/**
 * _strcpy - gjnctions same as the inbuilt strcpy
 * @dest: buffer
 * @src: sourbe string
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;
	while (*(str + len) != '\0')
		++len;
	for (i = 0; i <= len; i++)
		dest[i] = *(str + len);
	return (dest);
}
