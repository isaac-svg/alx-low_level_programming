#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints the values of a linked list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nill)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		num++;
	}

	return (num);
}
