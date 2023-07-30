#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated to a dog struct
 * @d: pointer to dog struct 
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
