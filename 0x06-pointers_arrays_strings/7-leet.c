#include "main.h"
/**
 * leet - encodes a string into 1337 format
 * @s: input string
 * Return: pointer to dest
 */

char *leet(char *s)

{

        int i, len;

        int lowercases[] = {97, 101, 108, 111, 116};

        int uppercases[] = {65, 69, 79, 76, 84};

        int rep[] = {48, 49, 51, 52, 55};

	len = 0;
        while (s[len] != '\0')
        {
                for (i = 0; i < 5; i++)

                {

                        if (s[len] == lowercases[i] || s[len] == uppercases[i])

                        {
                                s[len] = rep[i];
                                break;
                        }

                }

        len++;

        }

        return (s);
}
