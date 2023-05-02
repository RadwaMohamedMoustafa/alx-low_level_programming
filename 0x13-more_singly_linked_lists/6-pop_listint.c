#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: The beggining of the list
 * Return: The n value of the deleted node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp, *ptr;
	int i;

	if (!*head)
	{
	return (0);
	}
	temp = *head;
	ptr = temp;
	i = temp->n;
	temp = temp->next;
	*head = temp;
	free(ptr);
	ptr = NULL;
	return (i);
}
