#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head of a linked list
 * @head: pointer to the head
 *
 * Return: head value
 */
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int val;

	if (temp == NULL)
		return (0);
	/* delete head opreation */

	*head = (*head)->next;
	val = temp->n;
	free(temp);
	return (val);
}

