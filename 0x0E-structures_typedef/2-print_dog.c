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
		age = d->age ? d->age : 0;
		if (age == 0)
			printf("Name: %s\nAge: %s\nOwnwer: %s\n", name, "nil", owner);
		else
			printf("Name: %s\nAge: %f\nOwnwer: %s\n", name, age, owner);
	}	
}
