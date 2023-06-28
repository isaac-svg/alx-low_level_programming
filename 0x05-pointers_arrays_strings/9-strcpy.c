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
	while (*(src + len) != '\0')
		++len;
	for (i = 0; i <= len; i++)
		dest[i] = *(src + len);
	return (dest);
}
