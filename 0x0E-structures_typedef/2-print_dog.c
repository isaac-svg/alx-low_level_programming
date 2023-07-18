#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the data members of the dog param
 * @d: dog struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name != NULL ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner != NULL ? d->owner : "(nil)");
	}
}
