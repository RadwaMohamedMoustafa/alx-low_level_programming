#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at the specified index
 * @head: The start of the list
 * @index: The index to delete
 * Return: 1 if succesful and -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int i = 0;

	current = *head;
	previous = *head;

	if (!*head || !head)
	{
	return (-1);
	}

	if (index == 0)
	{
	*head = current->next;
	free(current);
	current = NULL;
	return (1);
	}

	else
	{
	while (index != 1 && i < index)
	{
	previous = current;
	current = current->next;
	i++;
	}
	previous->next = current->next;
	free(current);
	current = NULL;
	}

	return (1);
}
