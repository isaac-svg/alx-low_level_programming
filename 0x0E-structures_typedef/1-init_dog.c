#include "dog.h"
/**
 * init_dog - initialises the members of dog
 * @d: pointer to dog
 * @name: name of dog passed as argument
 * @age: age of dog passed as argument
 * @owner: name of owner passed as argument
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
