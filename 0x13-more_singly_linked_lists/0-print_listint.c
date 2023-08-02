#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints the number of elements in a list
 * @h: pointer to the head
 *
 * Return: The number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		printf("%zu\n", (h->n));
		h = h->next;
	}
	return (num);
}
