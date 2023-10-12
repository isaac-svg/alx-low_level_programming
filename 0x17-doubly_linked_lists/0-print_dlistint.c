#include "lists.h"
#include <stdio.h>

/**
  * print_dlistint - prints the elements in a linked list
  * @h: pointer to the head node
  * Return: number of elements in the list
  */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
