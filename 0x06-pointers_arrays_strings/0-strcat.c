/**
 * _strcat - copys one string onto another
 * @dest: destination string
 * @src: source string
 * Return: pointerbti dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen, slen;

	dlen = 0;
	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	slen = 0;
	while (src[slen] != '\0')
	{
		dest[dlen] = src[slen];
		dlen++;
		slen++;
	}
	dest[dlen] = '\0';

	return (dest);
}
