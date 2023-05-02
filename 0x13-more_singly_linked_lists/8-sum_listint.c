#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data in the nodes
 * @head: The start of the list
 * Return: The sum of all the integers
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int i = 0;

	temp = head;
	if (!temp)
	{
	return (0);
	}

	while (temp)
	{
	i += temp->n;
	temp = temp->next;
	}
	return (i);
}
