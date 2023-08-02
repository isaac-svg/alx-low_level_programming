#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: double pointer to the head element
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	current = *head;

	while (current && count < index - 1)
	{
		current = current->next;
		count++;
	}

	if (current == NULL || current->next == NULL || count < index - 1)
		return (-1);

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
