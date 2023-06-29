/**
 * _strncat - copys one string onto another
 * @dest: destination string
 * @src: source string
 * Return: pointerbti dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, src_len;

	dest_len = 0;
	src_len = 0;
	while (*(dest + dest_len))
	{
		if (*(dest + dest_len) == '\0')
		{
			for (src_len = 0; src_len < n; src_len++)
			{
				*(dest + dest_len + src_len) = *(src + src_len);
				++src_len;
				++dest_len;
			}
			break;
		}
		++dest_len;
	}
	return (dest);
}
