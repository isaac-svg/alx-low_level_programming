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
