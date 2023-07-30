#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - computes the length of a string
 * @s: string to get the length of
 *
 * Return: the length  of s
 */
int _strlen(const char *s)
{
	int a;

	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}

	return (a);
}

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: pointer to the char buffer to keep the copy
 * @src: string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';

	return (dest);
}

/**
 * new_dog - creates a dog struct
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to the new dog if successfful otherwise  NULL
 */
dog_t *new_dog(const char *name, float age, const char *owner)
{
	dog_t *dog;
	int l1, l2;

	l1 = _strlen(name);
	l2 = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (l1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (l2 + 1));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	_strcpy(dog->owner, owner);
	_strcpy(dog->name, name);
	dog->age = age;

	return (dog);
}
