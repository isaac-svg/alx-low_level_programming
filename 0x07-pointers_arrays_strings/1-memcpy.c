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
	int len;
	
	len = 0;
	for (; len < n; len++)
	{
		dest[len] = src[len];
	}

	return (dest);
}
