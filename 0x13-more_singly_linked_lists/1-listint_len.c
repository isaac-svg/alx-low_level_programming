#include "lists.h"

/**
 * listint_len - traverses the list an computes its length
 * @h: pointer to the head
 *
 * Return: length of the list
 */

size_t listint_len(const listint_t *h)
{
	int num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
