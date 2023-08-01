#include "lists.h"

/**
 * print_listint - prints the number of elements in a list
 * @h: pointer to the head
 *
 * Return: The number of elements
 */

size_t print_listint(const listint_t *h)
{
	int num = 0;
	char res;

	while (h)
	{
		num++;
		res = (h->n) + '0';
		_putchar(res);
		_putchar('\n');
		h = h->next;
	}
	return (num);
}
