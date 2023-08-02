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
	listint_t *node, *currNode, *nxtNode;
	unsigned int count;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return node;
	}

	currNode = *head;
	nxtNode = *head;
	nxtNode = nxtNode->next;

	while (nxtNode && (count <= idx))
	{
		currNode = currNode->next;
		nxtNode = nxtNode->next;
		count++;
	}

	if (nxtNode->next == NULL && count < idx)
		return (NULL);
	currNode->next = node;
	node->next = nxtNode;
	return (node);
}
