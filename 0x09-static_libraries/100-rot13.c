#include "main.h"
/**
 * rot13 - envides a string using root
 * @s: input string
 * Return: pointer to s
 */

char *rot13(char *s)

{

        int a, b;

        char *actual = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

        char *cipher = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	a = 0;
        while (s[a] != '\0')
        {

                for (b = 0; actual[b] != '\0'; b++)

                {
                        if (s[a] == actual[b])
                        {
                                s[a] = cipher[b];
                                break;
                        }
                }
		a++;
        }

        return (s);
}
