/**
 * string_toupper - converts lowercase to uppercase
 * @str: input string
 * Return: char pointer
 */
char *string_toupper(char str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		if (*(str + len) >= 'a' && *(str + len) <= 'z')
			*(str + len) = *(str + len) & '_';
		++len;
	}
	return (str);
}
