#include "lists.h"
#include <stddef.h>

/**
 * reverse_listint - reverses a linked list in linear time
 * @head: pointer to the head node
 *
 * Return: pointer to the head of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{

	listint_t *next = NULL; /* temporarily store the next pointer */
	listint_t *current =  *head;
	listint_t *prev = NULL;

	if (head == NULL || (*head)->next == NULL)
	{
		return (*head);
	}

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (*head);
}
