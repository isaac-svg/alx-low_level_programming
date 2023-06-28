#include "main.h"
/**
 *  _isupper - Checks if input is uppercase or lowercase
 *
 * @c: Argument
 *  Return: 1 if if input is upercase otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

