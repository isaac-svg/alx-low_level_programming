#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints all arguments based in format
* @format: string having the the types of the arguments
* Return: void
*/

void print_all(const char * const format, ...)
{
	int pos = 0;
	char *str, *separator = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[pos] != '\0')
		{
			switch (format[pos])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					str = va_arg(args, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					pos++;
					continue;
			}
			separator = ", ";
			pos++;
		}
	}


	printf("\n");
	va_end(args);
}
