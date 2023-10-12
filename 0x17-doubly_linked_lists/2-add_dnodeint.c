#include "lists.h"


/**
  * add_dnodeint - adds a new node to the head of the list
  * @head: pointer to the the head node
  * @n: value to insert
  * Return: pointer to the new node otherwise NULL
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = malloc(sizeof(dlistint_t));
	dlistint_t *h;

	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	h  = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
		{
			h = h->prev;
		}
	}

	newNode->next = h;

	if (h != NULL)
		h->prev = newNode;
	*head = newNode;

	return (newNode);
}
