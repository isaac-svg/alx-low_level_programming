#include "main.h"
/**
 *  _isupper - Checks if input is uppercase or lowercase
 *
 *@c: Argument
 *  Return: 1 if if input is upercase otherwise 0
 */

int _isupper(int c)
{
	int castInt = c;
	if (castInt >= 65 && castInt <= 90)
	
		return (1);
	
	else
		return (0);
}

