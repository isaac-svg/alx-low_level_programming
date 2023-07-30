#include <stdlib.h>
#include "main.h"

/**
 * countWords - Helper function to count the number of words in a string.
 * @str: The input string to evaluate.
 *
 * Return: The number of words in the string.
 */
int countWords(char *str)
{
    int flag, c, wordCount;

    flag = 0;
    wordCount = 0;

    for (c = 0; str[c] != '\0'; c++)
    {
        if (str[c] == ' ')
            flag = 0;
        else if (flag == 0)
        {
            flag = 1;
            wordCount++;
        }
    }

    return wordCount;
}

/**
 * strtow - Splits a string into words and creates an array of strings.
 * @str: The input string to split.
 *
 * Return: A pointer to an array of strings (Success),
 *         or NULL if there is an error.
 */
char **strtow(char *str)
{
    char **wordMatrix, *temp;
    int i, k = 0, len = 0, wordCount, c = 0, start, end;

    while (*(str + len))
        len++;
    wordCount = countWords(str);
    if (wordCount == 0)
        return NULL;

    wordMatrix = (char **)malloc(sizeof(char *) * (wordCount + 1));
    if (wordMatrix == NULL)
        return NULL;

    for (i = 0; i <= len; i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            if (c)
            {
                end = i;
                temp = (char *)malloc(sizeof(char) * (c + 1));
                if (temp == NULL)
                    return NULL;
                while (start < end)
                    *temp++ = str[start++];
                *temp = '\0';
                wordMatrix[k] = temp - c;
                k++;
                c = 0;
            }
        }
        else if (c++ == 0)
            start = i;
    }

    wordMatrix[k] = NULL;

    return wordMatrix;
}
