#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: The beggining of the list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (!head)
	{
	return;
	}
	else
	{
	while (head)
	{
	ptr = head->next;
	free (head);
	head = ptr;
	}
	}
}
