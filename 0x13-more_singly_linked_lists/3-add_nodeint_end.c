#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node to the end of a list
 * @head: pointer to the head of the list
 * @n: node value
 *
 * Return: pointer to the address of the new node,
 * otherwise NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail, *temp = *head;

	tail = malloc(sizeof(listint_t));
	if (tail == NULL)
		return (NULL);
	tail->n = n;
	tail->next = NULL;
	if(*head == NULL)
	{
		*head = tail;
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = tail;
	}
	return (tail);
}
