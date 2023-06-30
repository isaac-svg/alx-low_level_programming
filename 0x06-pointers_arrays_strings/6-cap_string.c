#include "main.c"
/**
 * cap_string - capalise the strings
 * @str: input stting
 * Return: void
 */
char *cap_char(char *str)
{

        int len, i;

	int seperators = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};


        if (s[len] >= 'a' && s[len] <= 'z')

                s[len] = s[len] & '_';

        len++;
        while (s[len] != '\0')

        {
                for (i = 0; i < 13; i++)

                {

                        if (s[len] == separators[i])
                        {

                                if ((s[len + 1] >= 'a') && (s[len + 1] <= 'z'))
                                	s[len + 1]  = s[len + 1] & '_';
                                break;

                        }

                }

                len++;

        }

        return (s);
}
