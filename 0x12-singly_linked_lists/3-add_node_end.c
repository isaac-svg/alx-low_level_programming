#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - adds a new node to tail
 * @head: pointer to the head
 * @str: string to the add to the new node
 * Return: pointer to the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tail, *temp = *head;
	unsigned int len = 0;


	while (str[len])
		len++;

	/* create a new node */

		tail = malloc(sizeof(list_t));

		if (!tail)
			return (NULL);

		tail->str = strdup(str);
		if (!tail->str)
		{
			free(tail);
			return (NULL);
		}
		tail->len = len;
		tail->next = NULL;

	/* check if the head is empty */
	if (!temp)
	{
		*head = tail;
		return (tail);
	}


	/* loop through the list until you get to the tail */
	while (temp->next)
		temp = temp->next;
	temp->next = tail;

	return (tail);
}
