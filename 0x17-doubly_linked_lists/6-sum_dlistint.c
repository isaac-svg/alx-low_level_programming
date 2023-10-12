#include "lists.h"

/**
 * sum_dlistint - computes the sum of all the data
 * of a linked list
 *
 * @head: pointer to the  head of the list
 * Return: sum of all the data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;


	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
