#include <stdlib.h>
#include <time.h>
#include <string.h>
/* more headers goes there */

/* 
 *  main - Entry point to function 
 *
 *  Return: Always 0 if no error  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int intResult = n;
	char buffer[200];
	sprintf(buffer, "%d", intResult);
	int length =  strlen(buffer);
	int index = length -1;
	char lastChar = buffer[index];
	int lastNum = lastChar - '0';
	if(lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	else if ( lastNum == 0)
		printf("Last digit of %d is %d and is zero\n", n, lastNum);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastNum);
	return (0);
}
