/**
 * _strncat - copys one string onto another
 * @dest: destination string
 * @src: source string
 * @n: lengtj of string to copy
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen, slen;

	dlen = 0;
	while (dest[dlen] != '\0')
		dlen++;
	slen = 0;
	while (slen < n && src[slen]  != '\0')
	{
		dest[dlen] = src[slen];
		slen++;
		dlen++;
	}

	return (dest);
}
