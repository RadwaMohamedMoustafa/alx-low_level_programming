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
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
	return (-1);
	}

	if (index == 0)
	{
	current = *head;
	*head = (*head)->next;
	free(current);
	return (1);
	}

	previous = *head;
	current = (*head)->next;
	for (i = 1; i < index && current != NULL; i++)
	{
	previous = current;
	current = current->next;
	}

	if (current == NULL)
	{
	return (-1);
	}

	previous->next = current->next;
	free(current);
	return (1);
}
