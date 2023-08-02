#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - gets the node the specified index
 * @head: have node
 * @index: index specified
 *
 * Return: pointer to the node (success), otherwise NUlL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp = head;

	while (temp && (count < index))
	{
		if (count == index - 1)
		{
			return (temp);
		}
		temp = temp->next;
		count++;
	}
	return (NULL);
}
