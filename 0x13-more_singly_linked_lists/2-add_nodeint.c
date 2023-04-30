#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning of a list
 * @head: The head of a list
 * @n: The int to add
 *
 * Return: The address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nodeA;

	nodeA = malloc(sizeof(listint_t));
	if (!nodeA)
	{
	return (NULL);
	}

	nodeA->n = n;
	nodeA->next = *head;
	*head = nodeA;
	return (nodeA);
}
