#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * insert_nodeint_at_index - inserts a node at a given position
 * @head: pointer to the head element
 * @idx: index to insert the node
 * @n: The value to be inserted
 *
 * Return: Pointer to the new node (Success),
 * otherwise NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node, *currNode;
	unsigned int count = 0;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	currNode = *head;

	while (currNode && (count < idx - 1))
	{
		currNode = currNode->next;
		count++;
	}

	if (currNode == NULL || count < idx -1)
	{
		free(node);
		return (NULL);
	}
	node->next = currNode->next;
	currNode->next = node;
	return (node);
}
