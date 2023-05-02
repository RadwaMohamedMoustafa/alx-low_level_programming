#include "lists.h"

/**
 * get_nodeint_at_index - Gets the node at a given index
 * @head: The start of the list
 * @index: The index to  check
 * Return: Node at given index or NULL if it doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	if (!temp && index)
	{
	return (0);
	}

	if (!index)
	{
	return (head);
	}
	else
	{
	while (temp && i < index)
	{
	temp = temp->next;
	i++;
	}
	}
	if (i != index)
	{
	return (0);
	}
	return (temp);
}
