#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a  linked list.
 * @head: pointer to head of the linked list
 * @index: index of the node to search for
 * Return: node at the nth index  or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size;
	dlistint_t *temp;

	size = 0;
	if (head == NULL)
		return (NULL);

	temp = head;
	while (temp)
	{
		if (index == size)
			return (temp);
		size++;
		temp = temp->next;
	}
	return (NULL);
}
