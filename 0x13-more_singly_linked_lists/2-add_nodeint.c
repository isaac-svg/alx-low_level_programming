#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @h: pointer to the head node
 * @n: node value to add 
 *
 * Return: address of the new element (Success), otherwise NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if(*head == NULL)
	{
		*head =  new;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
		
	return (new);
}
