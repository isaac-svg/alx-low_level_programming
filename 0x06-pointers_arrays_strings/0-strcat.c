/**
 * _strcat - copys one string onto another
 * @dest: destination string
 * @src: source string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int dest_len, src_len;

	dest_len = 0;
	src_len = 0;
	while (*(dest + dest_len))
	{
		if (*(dest + dest_len) == '\0')
		{
			while (*(src + src_len) != '\0')
			{
				*(dest + dest_len + src_len) = *(src + src_len);
				++src_len;
				++dest_len;
			}
			*(dest + dest_len + 1) = '\0';
			break;
		}
		++dest_len;
	}
	return (dest);
}

