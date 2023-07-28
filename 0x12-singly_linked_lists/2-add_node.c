#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node to the linked list
 * @head: pointer to the head of the linked list
 * @str: string argument to the stored in the new node
 * Return: pointer to the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *second;
	unsigned int len = 0;

	/* get the length of str */
	while (str[len])
		len++;
	second = malloc(sizeof(list_t));
	if (!second)
		return (NULL);

	second->str = strdup(str);
	second->len = len;
	second->next = *head;

	/* let the second element be the head */
	(*head) = second;
	return (*head);
}

