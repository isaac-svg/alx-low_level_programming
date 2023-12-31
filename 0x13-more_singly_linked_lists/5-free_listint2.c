#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to the head
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;
	current = *head;
	while (current)
	{
		temp = current;
		current = current->next;
		free(temp);
	}

	*head = NULL;
}
