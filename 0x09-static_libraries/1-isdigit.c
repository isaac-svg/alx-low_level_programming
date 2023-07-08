#include"main.h"
/**
 *  _isdigit - checks if number is between 0 and 9
 *
 * @c: parametr
 *  Return: 1 if c is dgit else
 */
int _isdigit(int c)
{
	if ((c >= 0 && c <= 9) || ((c - '0') >= 0 && ((c - '0') <= 9)))
		return (1);
	else
		return (0);
}
