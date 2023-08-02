#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a linked list.
 * @h: Pointer to a pointer to the head of the linked list.
 *
 * Return: The size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *slow, *fast, *temp;
	size_t nodes = 1;
	size_t count = 0;

	slow = *h;
	fast = *h;
	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = *h;
			while (slow != fast)
			{
				temp = slow;
				slow = slow->next;
				free(temp);
				count++;
			}
			fast = fast->next;
			while (slow != fast)
			{
				fast = fast->next;
				nodes++;
			}
			slow = *h;
			while (nodes > 0)
			{
				temp = slow;
				slow = slow->next;
				free(temp);
				count++;
				nodes--;
			}
			*h = NULL;
			return (count);
		}
	}
	while (*h != NULL)
	{
		temp = *h;
		*h = (*h)->next;
		free(temp);
		count++;
	}
	return (count);
}
