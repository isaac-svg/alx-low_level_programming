#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point to function
 *
 * Return: Always 0 if no error
 */
int main(void)
{

	char str[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
	return (0);
}
