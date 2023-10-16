#include "main.h"
/**
 * _memcpy - copies byte into array
 * @dest: destination buffer
 * @src: source buffer
 * @n: size of buffer to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int len;
	
	for (len = 0; len < n; len++)
	{
		dest[len] = src[len];
	}

	return (dest);
}
