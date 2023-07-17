#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints the data members of the dog param
 * @d: dog struct
 * Return: void
 */
void print_dog(struct dog *d)
{
	char *name, *owner;
	float age;
	if (d != NULL)
	{
		name = d->name ? d->name : "nil";
		owner = d->owner ? d->owner : "nil";
		age = d->age ? d->age : "nil";
		printf("Name: %s\nAge: %f\nOwnwer: %s\n", name, owner, age);
	}
}
