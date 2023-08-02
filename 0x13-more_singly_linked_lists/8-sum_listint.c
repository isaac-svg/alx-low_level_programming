#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sums all the values in the list
 * @head: pointer to the head node
 * Return: sum of the values
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head  = head->next;
	}
	return (sum);
}
