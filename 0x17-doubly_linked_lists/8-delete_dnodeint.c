#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *H1;
	dlistint_t *H2;
	unsigned int i;

	H1 = *head;

	if (H1 != NULL)
		while (H1->prev != NULL)
			H1 = H1->prev;

	i = 0;

	while (H1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = H1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				H2->next = H1->next;

				if (H1->next != NULL)
					H1->next->prev = H2;
			}

			free(H1);
			return (1);
		}
		H2 = H1;
		H1 = H1->next;
		i++;
	}

	return (-1);
}
