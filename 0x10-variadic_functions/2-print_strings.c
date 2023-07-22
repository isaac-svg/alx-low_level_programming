#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_strings - prints the string arguments passed to it
 *@separator: indicates what the strings should be separated with
 *@n: number of arguments
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *va;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		va =  va_arg(args, char *);
		if (va ==  NULL)
		{
			printf("(nill)");
		}
		else
		{
			printf("%s", va);
		}
		if (i != (n - 1) && (va != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(args);
}
