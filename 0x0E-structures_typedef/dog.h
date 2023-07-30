#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
 * struct dog - a structure for a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedefinition for structure dog
 */
typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(const char *name, float age, const char *owner);
char *_strcpy(char *dest, const char *src);
int _strlen(const char *src);

#endif
