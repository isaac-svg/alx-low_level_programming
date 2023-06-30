/**
 * _strcmp - compares strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if same
 */
int _strcmp(char *s1, char *s2)
{
	int s1_len, s2_len, i;

	s1_len = 0;
	s2_len = 0;
	while (*(s1 + s1_len) != '\0')
	{
		++s1_len;
	}
	while (*(s2 + s2_len) != '\0')
	{
		++s2_len;
	}
	if (s2_len == s1_len)
	{
		for (i = 0; i < s1_len; i++)
		{
			if (*(s1 + i) != *(s2 + i))
				return (s1[i] - s2[i]);
		}
	}
	else 
	{
		if (s1_len > s2_len)
			return (s1[s2_len + 1] - '\0');
		else
			return ('\0' - s2[s1_len + 1]);
	}
	return (0);
}
