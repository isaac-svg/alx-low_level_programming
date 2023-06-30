/**
 * _strncpy - works same as strncpy
 * @dest: dsstination string
 * @src: source string
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, i, src_len;

	src_len = 0;
	len = n;
	while (*(src + src_len) != '\0')
	{
		++src_len;
	}
	for (i = 0; i < len; i++)
	{
		if (i >= src_len)
			*(dest + i) = '\0';
		else
			*(dest + i) = *(src + i);
	}

	return (dest);
}
