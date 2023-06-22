#include "main.h"
#include<stdio.h>
/*
 *  _isupper - Checks if input is uppercase or lowercase
 *
 *  Return: 1 if if input is upercase otherwise 0
 */

int _isupper(char c)
{
	int castInt = c;
	if ( castInt >= 65 && castInt <= 90)
	
		return (1);
	
	else
		return (0);
}
/**
 * main - test code .
*
 * Return: 0 .
 */
int main(void)
{
    char c;

    c = 'A';
    printf("%c: %d\n", c, _isupper(c));
    c = 'a';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
