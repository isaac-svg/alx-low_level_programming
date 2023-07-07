#include "main.h"
#include <string.h>

/**
 * main - prints _putchar
 * Return: 0 if no error
 */
int main(void)
{
	char *str = "_putchar";
	int i;
	int n = strlen(str);

	for (i = 0; i < n; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
