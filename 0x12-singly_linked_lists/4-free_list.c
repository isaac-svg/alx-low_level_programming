#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a linked list
 * @head: pointer to the head of the linked list
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *nxtNode;

	while (head)
	{
		nxtNode = head->next;
		free(head->str);
		free(head);
		head = nxtNode;
	}

}
