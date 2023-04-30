#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: The beggining of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr = NULL, *temp;

	if (head == NULL)
		return;

	temp = *head;
	while (temp)
	{
	ptr = temp;
	temp = temp->next;
	free(ptr);
	}
	*head = NULL;
}
