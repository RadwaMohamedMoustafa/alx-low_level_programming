#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node at a specified index
 * @head: The start of the list
 * @idx: The index to insert at
 * @n: The interger to insert
 * Return: Address of new node or NULL if it fialed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *nodeD;
	unsigned int i = 0;

	if (*head == NULL && idx != 0)
	{
	return (0);
	}
	nodeD = malloc(sizeof(listint_t));

	if (!nodeD)
	{
	return (0);
	}
	nodeD->n = n;
	nodeD->next = NULL;

	if (!idx)
	{
	nodeD->next = *head;
	*head = nodeD;
	return (nodeD);
	}
	temp = *head;
	while (i < idx - 1)
	{
	if (temp->next == NULL)
	{
	free(nodeD);
	return (0);
	}
	temp = temp->next;
	i++;
	}
	nodeD->next = temp->next;
	temp->next = nodeD;

	return (nodeD);
}
