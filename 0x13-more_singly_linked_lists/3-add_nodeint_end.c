#include "lists.h"

/**
 * add_nodeint_end - Adds a node to the end of a list
 * @head: Beggining of the list
 * @n: The int to be added to the list
 *
 * Return: The adress of the new element
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeC, *temp;

	nodeC = malloc(sizeof(listint_t));
	temp = *head;
	if (!nodeC)
	{
	return (0);
	}
	nodeC->n = n;
	nodeC->next = NULL;
	if (!*head)
	{
	*head = nodeC;
	}
	else
	{
	while (temp->next)
	{
	temp = temp->next;
	}
	temp->next = nodeC;
	}
	return (nodeC);
}
