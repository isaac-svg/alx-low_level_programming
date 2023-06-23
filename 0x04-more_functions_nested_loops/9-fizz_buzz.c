#include "main.h"
#include <stdio.h>

/**
 * main -Entry point to program .
 * Return: o
 */

int main()
{
	int i;
	for(i = 0; i < 100; i++)
	{
		if(i % 3 ==0)
		{
			puts("Fizz");
		}
		else if(i % 5 == 0)
		{
			puts("Buzz");
		}
		else if(i % 15 == 0)
		{
			puts("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
		printf("%c", ' ');
	}

