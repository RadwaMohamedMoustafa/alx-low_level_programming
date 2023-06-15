#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *New;
	dlistint_t *head;
	unsigned int i;

	New = NULL;
	if (idx == 0)
		New = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					New = add_dnodeint_end(h, n);
				else
				{
					New = malloc(sizeof(dlistint_t));
					if (New != NULL)
					{
						New->n = n;
						New->next = head->next;
						New->prev = head;
						head->next->prev = New;
						head->next = New;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (New);
}
